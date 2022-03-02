#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main() 
{
	int yedek;
	int dizi1[10];
	int dizi2[10];
	srand(time(NULL));
	
	printf("1.Dizi Terimleri: ");
	for(int i=0; i<10; i++) 
	{
		dizi1[i]=rand()%50;
		printf("%d ", dizi1[i]);
	}
	
	printf("\n");
	printf("2.Dizi Terimleri: ");
	for(int j=0; j<10;j++) 
	{
		dizi2[j]=rand()%50;
		printf("%d ", dizi2[j]);
	}
	
	printf("\n");
	
	for(int k=0; k<10; k+=2) 
	{
		yedek=dizi1[k];
		dizi1[k]=dizi2[k+1];
		dizi2[k+1]=yedek;
	}
	
	printf("1. dizi degistirilmis hali: ");
	for(int a=0; a<10; a++) 
	{
		printf("%d ", dizi1[a]);
	}
	
	printf("\n2. dizi degistirilmis hali: ");
	for(int b=0; b<10; b++) 
	{
		printf("%d ", dizi2[b]);
	}
	getch();
	return 0;
}
