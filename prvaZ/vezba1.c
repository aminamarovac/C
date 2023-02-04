// #include <stdio.h> 
// int main() 
// { 
//  double a1, a2, b1, b2, x, y; 
//  printf("Unesite koeficijente:\na1= "); scanf("%lf", &a1); 
//  printf("b1= "); scanf("%lf", &b1); 
//  printf("a2= "); scanf("%lf", &a2); 
//  printf("b2= "); scanf("%lf", &b2); 
//  printf("\nPrave:\ny=%.2fx+%.2f\ny=%.2fx+%.2f\n", a1, b1, a2, b2); 
//  if(a1==a2) 
//  { 
//  if(b1==b2) printf("\nPrave su podudarne."); 
//  else printf("\nPrave su paralelne."); 
//  } 
//  else 
//  { 
//  x=(b2-b1)/(a1-a2); 
//  y=a1*x+b1; 
//  printf("\nTacka preseka je x= %.2f, y= %.2f\n", x, y); 
//  } 
//  return 0; 
// }
// // #include <stdio.h> 
// #include <math.h> 
// #define PI 3.141592 
// main() 
// { 
//  double xa, ya, xb, yb, xc, yc, a, b, c, alfa, beta, gama;
//  printf("Unesite koordinate tacke A(x,y): "); 
//  scanf("%lf%lf",&xa,&ya); 
//  printf("Unesite koordinate tacke B(x,y): "); 
//  scanf("%lf%lf",&xb,&yb); 
//  printf("Unesite koordinate tacke C(x,y): "); 
//  scanf("%lf%lf",&xc,&yc); 
//  a = sqrt(pow(xb-xc,2) + pow(yb-yc,2)); 
//  b = sqrt(pow(xa-xc,2) + pow(ya-yc,2)); 
//  c = sqrt(pow(xa-xb,2) + pow(ya-yb,2)); 
//  printf("\nStranice:\n"); 
//  printf("a= %f\n", a); 
//  printf("b= %f\n", b); 
//  printf("c= %f\n", c); 
//  if(a+b>c && a+c>b && b+c>a) 
//  { 
//  alfa = acos( (b*b+c*c-a*a) / (2*b*c) ); 
//  beta = acos( (c*c+a*a-b*b) / (2*c*a) ); 
//  gama = acos( (a*a+b*b-c*c) / (2*a*b) ); 
//  alfa *= 180/PI; 
//  beta *= 180/PI; 
//  gama *= 180/PI; 
//  printf("\nUglovi:\n"); 
//  printf("Alfa = %.2f stepeni\n", alfa); 
//  printf("Beta = %.2f stepeni\n", beta); 
//  printf("Gama = %.2f stepeni\n", gama); 
//  } 
//  еlse 
//  printf("Ne moze se kreirati trougao.\n");
//  getche(); 
//  return 0; 
// }

// #include<stdio.h>
// int main(){
//     printf("Hello");
//     return 0;
// }
// #include<stdio.h>
// main(){
// int a,n,i=1,stepen=1;
// printf("a=");
// scanf("%d",&a);
// printf("n=");
// scanf("%d",&n);
// while(i<=n){
//     stepen*=a;
//     i++;
// }
// printf("%d na %d je %d",a,n,stepen);
// return 0;
// }
