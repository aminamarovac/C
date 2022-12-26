#include <stdio.h>
#include <stdlib.h>
main()
{
 int **a;
 int n, i, j, k, suma=0, x=0;
 printf("\n Broj vrsta i kolona: ");
 scanf("%d", &n);
 a=(int **)malloc(n*sizeof(int*));
 if(a==NULL)
 {
 printf("\n GRESKA!");
 return 1;
 }
 for(i=0; i<n; i++)
 {
 a[i]=(int *)malloc(n*sizeof(int));
 if(a[i]==NULL)
 {
 printf("\n GRESKA!");
 for(k=0; k<i; k++)
 free(a[k]);
 free(a);
 return 1;
 }
 }
 printf("\n Unesite elemente matrice:\n");
 for(i=0; i<n; i++)
 {
 for(j=0; j<n; j++)
 {
 printf(" a[%d][%d] = ", i, j);
 scanf("%d", &a[i][j]);
 }
 }
 printf("\n Izgled matrice:\n");
 for(i=0; i<n; i++)
 {
 for(j=0; j<n; j++)
 printf(" %d", a[i][j]);
 printf("\n");
 }
 for(i=n-1; i>=0; i--)
 {
 x++;
 for(j=n-1; j>=x; j--)
 suma+=a[i][j];
 }
 printf("\n Zbir= %d", suma);
 for(i=0; i<n; i++)
 free(a[i]);
 free(a);
 return 0;
}
