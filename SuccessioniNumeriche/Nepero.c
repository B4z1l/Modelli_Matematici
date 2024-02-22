#include<stdio.h>
#include<stdlib.h>
#include<math.h>

long double fattoriale( long double);

int main(void){/*calcoliamo in numero di Nepero dalla definizione*/

 long double an = 1, n ;

for(n = 1; n < 1e5; n++){  /*l'algoritmo può calcolare con precisione assoluta fino alla quindicesima cifra decimale di e*/

an += 1. / fattoriale(n) ; 

}


printf("%.0lf %.15lf\n",  (double) n,(double) an);



    return 0;
}


long double fattoriale(long double x){
 if(x == 0){
  return 1.;
 } else {
  return x * (x-1.);
 }
}


