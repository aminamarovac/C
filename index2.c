#include <stdio.h>
#define MAX 100
typedef struct studenti
{
 char ime[15];
 char prezime[20];
 char brojIndexa[10];
 int brPrenetih;
 float prosek;
} STUDENTI;
main()
{
 STUDENTI Student[MAX];
 int i, n;
 float prosek=0;
 printf("\n Unesite broj studenata: ");
 scanf("%d",&n);
 for(i=0; i<n; i++)
 {
 printf("\n PODACI O STUDENTU %d:\n", i+1);
 printf(" Unesite ime i prezime studenta: ");
 scanf("%s %s",&Student[i].ime, &Student[i].prezime);
 printf(" Unesite broj indeksa: ");
 scanf("%s",&Student[i].brojIndexa);
 printf(" Unesite broj prenetih ispita: ");
 scanf("%d",&Student[i].brPrenetih);
 printf(" Unesite prosek: ");
 scanf("%f",&Student[i].prosek);
 }
 printf("\n IZABRANI STUDENTI:\n");
 for(i=0; i<n; i++)
 {
 if(Student[i].prosek>prosek)
 if(Student[i].brPrenetih<5)
 printf(" %s %s %s\n", Student[i].ime,
 Student[i].prezime, Student[i].brojIndexa);
 }
 return 0;
} 
