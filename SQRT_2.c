#include <stdio.h>
#include <gmp.h>

int main(void) {
  mpf_t x, y;
  mpf_init (x); 
  mpf_init (y);
  int   n=40;
  mpf_init2 (y, 100);  
  mpf_set_str(x,"2",10);
  
  mpf_sqrt(y,x);
 gmp_printf("%.*Ff\n",n,y,n);

 /* free used memory */
  mpf_clear (x);
  mpf_clear (y);
 return 0;
}



