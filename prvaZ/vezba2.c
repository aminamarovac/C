#include<stdio.h> 
#include <math.h> 
int main() 
{ 
 double xA, yA, xB, yB, xC, yC, a, b, c, s, P; 
 printf("Koordinate temena trougla\n"); 
 printf("- prvo teme <xA,yA>: "); scanf("%lf%lf",&xA,&yA); 
 printf("- drugo teme <xB,yB>: "); scanf("%lf%lf",&xB,&yB); 
 printf("- trece teme <xC,yC>: "); scanf("%lf%lf",&xC,&yC); 
 a=sqrt(pow(xB-xC,2)+pow(yB-yC,2)); 
 b=sqrt(pow(xC-xA,2)+pow(yC-yA,2)); 
 c=sqrt(pow(xA-xB,2)+pow(yA-yB,2)); 
 s=(a+b+c)/2; 
 P=sqrt(s*(s-a)*(s-b)*(s-c)); 
 printf("\nPovrsina trougla: %.2f\n", P); 
 return 0; 
}