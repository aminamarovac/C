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


// #include <stdio.h> 
// #define MAX 100 
// main() 
// { 
//  int i, j, n, pom=2, niz[MAX]; 
//  printf(" Broj elemenata niza: "); 
//  scanf("%d", &n); 
//  printf(" Elementi niza: "); 
//  while(n>=3 && n<=MAX) 
//  { 
//  for(i=1; i<=n; i++) 
//  { 
//  scanf("%d", &j); 
//  niz[i-1]=j; 
//  } 
//  for(i=2; i<n; i++) 
//  { 
//  if(niz[i]==(niz[i-1]+niz[i-2])) 
//  pom++; 
//  else 
//  { 
//  printf("\n Niz nije Fibonacijev!"); 
//  break; 
//  } 
// #include <stdio.h> 
// #define MAX 100 
// main() 
// { 
//  int niz[MAX], i, n, max; 
//  printf(" Broj elemenata niza: "); 
//  scanf("%d", &n); 
//  printf(" Elementi niza: "); 
//  for(i=0; i<n; i++) 
//  scanf ("%d",&niz[i]); 
//  max=niz[1]; 
//  printf("\n Parne pozicije: "); 
//  for(i=0; i<n; i++) 
//  if(i%2!=0 ) 
//  { 
//  printf("%d ",niz[i]); 
//  if(niz[i]>max) max=niz[i]; 
//  } 
//  printf("\n MAX= %d", max); 
//  getche(); 
//  return 0; 
// } 
//  } 
//  if(pom==n) 
//  printf("\n Niz jeste Fiboacijev!"); 
//  break; 
//  } 
//  return 0; 
// }

// #include <stdio.h> 
// #define MAX 100 
// main() 
// { 
//  int i, iSrednji, iMin=0, iMax; 
//  int n, broj, nadjen=0, niz[MAX]; 
//  printf(" Broj elemenata niza: "); 
//  scanf("%d", &n); 
//  printf(" Elementi niza: "); 
//  for(i=0; i<n; i++) 
//  scanf("%d", &niz[i]); 
//  printf(" Trazena vrednost: "); 
//  scanf("%d", &broj); 
//  iMax=n-1; 
//  while(iMin<=iMax) 
//  { 
//  iSrednji = (iMin+iMax)/2; 
//  if(broj==niz[iSrednji]) 
//  { 
//  nadjen=1; 
//  printf("\n Vrednost %d je %d. element.", broj, iSrednji+1); 
//  break; 
//  } 
//  else if(broj<niz[iSrednji]) 
//  iMax=iSrednji-1; 
//  else 
//  iMin=iSrednji+1; 

// 150 
//  } 
//  if(!nadjen) 
//  printf ("\n Vrednost %d nije nadjena u nizu.", broj); 
//  return 0; 
// }

// #include <stdio.h> 
// #define MAX 100 
// void Fibonaci(int niz[], int n) 
// { 
//  int i; 
//  for(i=0; i<n; i++) 
//  if(i<2) niz[i]=1; 
//  else niz[i]=niz[i-1]+niz[i-2]; 
// } 
// void Prikazi(int niz[], int n) 
// { 
//  int i; 
//  for(i=0; i<n; i++) 
//  printf("%d ", niz[i]); 
// } 
// main() 
// { 
//  int niz[MAX], n; 
//  printf(" Broj Fibonacijevih brojeva: "); 
//  scanf("%d", &n); 
//  printf("\n"); 
//  Fibonaci(niz, n); 
//  Prikazi(niz, n); 
//  getche(); 
//  return 0; 
// }

// #include <stdio.h> 
// #include <math.h> 
// double Ekspon (double x, int n) 
// { 
//  double ex=1, clan=1; 
//  int i; 
//  for(i=1; i<n; i++) 
//  { 
//  clan *= x/i; 
//  ex += clan; 
//  } 
//  return ex; 
// } 
// main() 
// { 
//  double x, ex, ext, apsgr; 
//  int n; 
//  printf (" x= "); 
//  scanf ("%lf", &x); 
//  printf (" n= "); 
//  scanf ("%d", &n); 
//  ex=Ekspon(x,n); /*Izracunata vrednost*/
//  ext=exp(x); /*Tacna vrednost*/
//  apsgr = fabs(ex-ext); 
//  printf("\n Izracunato= %.4f", ex); 
//  printf("\n Tacno= %.4f", ext); 
//  printf("\n APSGR= %.4f", apsgr); 
//  return 0; 
// }

// #include <stdio.h> 
// #define MAX 100 
// void Sortiraj(int a[], int n) 
// { 
//  int i, j, pom, min; 
//  for(i=0; i<n-1; i++) 
//  { 
//  min=i; 
//  for(j=i+1; j<n; j++) 
//  if(a[j]<a[min]) 
//  min=j; 
//  if(min!=i) 
//  { 
//  pom=a[i]; 
//  a[i]=a[min]; 
//  a[min]=pom; 
//  } 
//  } 
// } 
// main() 
// { 
//  int a[MAX], i, j, n, indeks=-1, duzina=-1, brojac; 
//  printf(" Broj elemenata niza: "); 
//  scanf("%d", &n); 
//  printf(" Elementi niza: "); 
//  for(i=0; i<n; i++) 
//  scanf("%d", &a[i]); 
//  Sortiraj(a,n); 
//  printf("\n Sortiran niz: "); 
//  for(i=0; i<n; i++) 
//  printf("%d ", a[i]); 
//  for(i=0; i<n; i++) 
//  { 
//  brojac=1; 
//  for(j=i+1; j<n && a[i]==a[j]; j++) 
//  brojac++; 
//  if(brojac > duzina) 
//  { 
//  duzina=brojac; 
//  indeks=i; 
//  } 
//  } 
//  printf("\n Najveci broj puta se pojavljuje broj %d i to %d puta.", 
//  a[indeks], duzina); 
//  return 0; 
// }


// #include <stdio.h> 
// #define MAX 100 
// main() 
// { 
//  int i, j, m, n, mat[MAX][MAX]; 
//  printf(" Vrsta m= "); 
//  scanf("%d", &m); 
//  printf(" Kolona n= "); 
//  scanf("%d", &n); 
//  /*Citanje matrice sa tastature*/ 
//  for(i=0; i<m; i++) 
//  for(j=0; j<n; j++) 
//  { 
//  printf(" element[%d][%d] = ",i,j); 
//  scanf("%d", &mat[i][j]); 
//  } 
//  /*Prikaz matrice*/ 
//  printf("\n Uneta matrica:\n"); 
//  for(i=0; i<m; i++) 
//  { 
//  for(j=0; j<n; j++) 
//  printf(" %d", mat[i][j]); 
//  printf("\n"); 
//  } 
//  return 0; 
// }

// #include <stdio.h> 
// #define MAX 100 
// main() 
// { 
//  int i, j, m, n, s=0, nule=0, mat[MAX][MAX]; 
//  printf(" m= "); 
//  scanf("%d",&m); 
//  printf(" n= "); 
//  scanf("%d", &n); 
//  printf("\n Uneta matrica:\n"); 
//  for(i=0; i<m; i++) 
//  for(j=0; j<n; j++) 
//  scanf("%d",&mat[i][j]); 
//  for(i=0; i<m; i++) 
//  for(j=0; j<n; j++) 
//  { 
//  if(mat[i][j]%2==0) s+=mat[i][j]; 
//  if(mat[i][j]==0) nule++; 
//  } 
//  printf("\n Suma parnih elemenata: %d", s); 
//  printf("\n Broj elemenata jednakih nuli: %d", nule); 
//  return 0; 
// }

// Nacrtati strukturni dijagram toka algoritma i na programskom jeziku C napisati program koji cita brojeve sa standardnog 
// ulaza,sve dok ne pronadje prvi simetricni broj.Prikazati taj broj.Primeri simetricnih brojeva:1221,1331,8448...
// #include <stdio.h>
// #include <stdbool.h>

// bool is_symmetric(int num) {
//     int reverse = 0, original = num;
//     while (num != 0) {
//         int last_digit = num % 10;
//         reverse = reverse * 10 + last_digit;
//         num /= 10;
//     }
//     return reverse == original;
// }

// int main() {
//     int num;
//     while (true) {
//         printf("Unesite broj: ");
//         scanf("%d", &num);
//         if (is_symmetric(num)) {
//             printf("Pronadjen simetrični broj: %d\n", num);
//             break;
//         }
//     }
//     return 0;
// }
// Program čita brojeve sa standardnog ulaza koristeći funkciju scanf i provjerava da li je taj broj simetričan koristeći funkciju is_symmetric. Ako se pronađe simetričan broj, program ispisuje taj broj i prekida se. Ukoliko nije pronađen simetričan broj, program se nastavlja sa čitanjem sljedećeg broja.


// #include <stdio.h> 
// #define MAX 100 
// typedef struct ucenci 
// { 
//  char ime[15]; 
//  char prezime[15]; 
//  char adresa[15]; 
//  int razred; 
//  int odeljenje; 
// } UCENICI; 
// main() 
// { 
//  UCENICI ucenik[MAX]; 
//  int i, n, x; 
//  FILE *dato; 
//  if((dato=fopen("ucenik.txt","w"))==NULL) 
//  { 
//  printf("\n Greska pri otvaranju datoteke!"); 
//  exit(1); 
//  } 
//  printf("\n Broj ucenika: "); 
//  scanf("%d",&n); 
//  for(i=0; i<n; i++) 
//  { 
//  printf("\n -UCENIK %d-\n",i+1); 
//  printf(" Ime: "); 
//  scanf("%s", &ucenik[i].ime); 
//  printf(" Prezime: "); 
//  while(getchar()!='\n'); 
//  scanf("%s", &ucenik[i].prezime); 
//  printf(" Adresa: "); 
//  scanf("%s", &ucenik[i].adresa); 
//  printf(" Razred: "); 
//  scanf("%d",&ucenik[i].razred); 
//  printf(" Odeljenje: "); 
//  scanf("%d",&ucenik[i].odeljenje); 
//  fprintf(dato,"%-15s%-15s%-15s%2d%2d\n",ucenik[i].ime, 
//  ucenik[i].prezime, ucenik[i].adresa, 
//  ucenik[i].razred, ucenik[i].odeljenje); 
//  } 
//  fclose(dato); 
//  printf("\n\n Datoteka je kreirana.\n"); 
//  printf("\n Rezred za pretragu: "); 
//  scanf("%d",&x); 
//  if((dato=fopen("ucenik.txt","r"))==NULL) 
//  { 
//  printf("\n Greska pri otvaranju datoteke!"); 
//  exit(1); 
//  } 
//  printf("\n -Ucenici %d-og razreda-\n", x); 
//  for(i=0; i<n; i++) 
//  { 
//  fscanf(dato, "%s%s%s%d%d",&ucenik[i].ime, &ucenik[i].prezime, 
//  &ucenik[i].adresa,&ucenik[i].razred,&ucenik[i].odeljenje); 
//  if(ucenik[i].razred==x) 
//  printf(" %-10s%-10s%-15s%2d%2d\n",ucenik[i].ime, ucenik[i].prezime, 
//  ucenik[i].adresa, ucenik[i].razred, ucenik[i].odeljenje); 
//  } 
//  fclose(dato); 
//  getche(); 
//  return 0; 
// }

// #include <stdio.h> 
// typedef struct student 
// { 
//  char ime[15]; 
//  char prezime[15]; 
//  int predavanja; 
//  int kolokvijumi; 
//  int ispit; 
//  int ukupanBrBodova; 
// }STUDENT; 
// main() 
// { 
//  STUDENT studenti[5]; 
//  int i, brp=0, brn=0; 
//  FILE *f, *p, *n; 
//  char ime1[20], ime2[20], ime3[20]; 
//  printf("\n Ime datoteke sa podacima: "); 
//  scanf("%s",&ime1); 
//  printf(" Ime datoteke za polozene: "); 
//  scanf("%s",&ime2); 
//  printf(" Ime datoteke za nepolozene: "); 
//  scanf("%s",&ime3); 
//  f=fopen(ime1, "r"); 
//  if(f == NULL) 
//  { 
//  printf("Greska prilikom otvaranja datoteke!\n"); 
//  return 1; 
//  } 
//  p=fopen(ime2, "w"); 
//  if(p == NULL) 
//  { 
//  printf("Greska prilikom otvaranja datoteke!\n"); 
//  return 1; 
//  } 
//  n=fopen(ime3, "w"); 
//  if(n == NULL) 
//  { 
//  printf("Greska prilikom otvaranja datoteke!\n"); 
//  return 1; 
//  } 
//  for(i=0;i<5;i++) 
//  { 
//  fscanf(f, "%s%s%d%d%d", &studenti[i].ime, &studenti[i].prezime, 
//  &studenti[i].predavanja, &studenti[i].kolokvijumi, 
//  &studenti[i].ispit); 
//  studenti[i].ukupanBrBodova = (studenti[i].predavanja + 
//  studenti[i].kolokvijumi + studenti[i].ispit); 
//  if(studenti[i].ukupanBrBodova>50) 
//  { 
//  fprintf(p, "%s %s %d\n", studenti[i].ime, studenti[i].prezime, 
//  studenti[i].ukupanBrBodova); 
//  brp++; 
//  } 
//  else 
//  { 
//  fprintf(n, "%s %s %d\n", studenti[i].ime, studenti[i].prezime, 
//  studenti[i].ukupanBrBodova); 
//  brn++;
//  } 
//  } 
//  fclose(f); 
//  fclose(p); 
//  fclose(n); 
//  printf ("\n Datoteke su kreirane!\n"); 
//  printf (" Broj studenata koji su polozili: %d\n", brp); 
//  printf (" Broj studenata koji nisu polozili: %d\n", brn); 
//  getche(); 
//  return 0; 
//}  


// #include <stdio.h> 
// #define MAX 100 
// typedef struct artikli 
// { 
//  int barKod; 
//  char ime[30]; 
//  float cena; 
//  float PDV; 
// } ARTIKLI; 
// main() 
// { 
//  ARTIKLI artikal[MAX]; 
//  int i=0; 
//  FILE *dato1, *dato2; 
//  if((dato1=fopen("proizvodiPDV.txt", "r"))==NULL) 
//  { 
//  printf("\n Greska pri otvaranju datoteke!"); 
//  exit(1); 
//  } 
//  if((dato2=fopen("proizvodiPDVNovo.txt", "w"))==NULL) 
//  { 
//  printf("\n Greska pri otvaranju datoteke!"); 
//  exit(1); 
//  } 
//  while(1) 
//  { 
//  fscanf(dato1, "%d %s %f %f", &artikal[i].barKod, &artikal[i].ime, 
//  &artikal[i].cena, &artikal[i].PDV); 
//  if(feof(dato1)) break; 
//  artikal[i].cena*=(1+artikal[i].PDV); 
//  fprintf(dato2, "%5d %-15s %4.2f\n", 
//  artikal[i].barKod, artikal[i].ime, artikal[i].cena); 
//  i++; 
//  } 
//  fclose(dato1); fclose(dato2); 
//  printf("\n Datoteka je formirana!\n"); 
//   return 0; 
// }