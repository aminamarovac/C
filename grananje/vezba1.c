#include <stdio.h> 
main() 
{ 
 double a1, a2, b1, b2, x, y; 
 printf("Unesite koeficijente:\na1= "); scanf("%lf", &a1); 
 printf("b1= "); scanf("%lf", &b1); 
 printf("a2= "); scanf("%lf", &a2); 
 printf("b2= "); scanf("%lf", &b2); 
 printf("\nPrave:\ny=%.2fx+%.2f\ny=%.2fx+%.2f\n", a1, b1, a2, b2); 
 if(a1==a2) 
 { 
 if(b1==b2) printf("\nPrave su podudarne."); 
 else printf("\nPrave su paralelne."); 
 } 
 else 
 { 
 x=(b2-b1)/(a1-a2); 
 y=a1*x+b1; 
 printf("\nTacka preseka je x= %.2f, y= %.2f\n", x, y); 
 } 
 return 0; 
}