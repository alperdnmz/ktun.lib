#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main() 
{
	printf("TR-Matristeki En Buyuk Eleman ve Kac Kere Tekrar Ettigini Yazan Program\n");
	printf("EN-program to find the largest and repeating number in a matrix\n");
	printf("-------------------------------------------------------------------------");
	
	int i,j,satir,sutun,max=0,sayac=0;
	int matris[i][j];
	srand(time(NULL));
	
	 printf("Max Satir Tanimlayiniz (Define Max Rows): ");
	 scanf("%d", &satir);
	 printf("\nMax Sutun Tanimlayiniz (Define Max Column): ");
	 scanf("%d", &sutun);
	 
	 for(i=0; i<satir; i++) 
	 {
	 	for(j=0; j<sutun; j++) 
		 {
		 	matris[i][j]=rand()%100;
		 }
	 }
	 
	 for(i=0;i<satir;i++) 
	 {
	 	for(j=0;j<sutun;j++) 
		 {
		 	printf("%d ", matris[i][j]);
		 }
		 printf("\n");
	 }
	 
	 for(i=0;i<satir;i++) 
	 {
	 	for(j=0;j<sutun;j++) 
		 {
		 	if(matris[i][j]>max) 
			 {
			 	max=matris[i][j];
			 }
		 }
	 }
	 for(i=0;i<satir;i++) 
	 {
	 	for(j=0;j<sutun;j++) 
		 {
		 	if(max==matris[i][j]) 
			 {
			 	sayac++;
			 }
		 }
	 }
	 printf("\nMatristeki en buyuk sayi (Biggest Number in Matrix): %d", max);
	 printf("\nMatristeki en buyuk sayinin adedi (Number of Repeats of the Largest Number in The Matrix): %d", sayac);
	 
	 getch();
	 return 0;
}
