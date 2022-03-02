#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
	printf("-----------------------------------------------------------------\n");
	printf("10'lu Diziyi Kucukten Buyuge ve Buyukten Kucuge Siralayan Program\n");
	printf("-----------------------------------------------------------------\n");
	srand(time(NULL));
	int i,yedek,dizi[10];
	
	printf("\nDizi: ");
	for(i=0; i<10; i++) 
	{
		dizi[i]=rand()%50;
		printf(" %d ", dizi[i]);
	}
	
	for(i=0; i<10; i++) 
	{
		for(int j=i+1; j <10; j++)
		{
			if(dizi[i]>dizi[j]) 
			{
			    yedek= dizi[i];
				dizi[i] = dizi[j];
				dizi[j] = yedek;
		    }
		}
		
	}
	printf("\nKucukten Buyuge Siralama:");
	for(i=0; i<10; i++) 
	{
		printf(" %d ", dizi[i]);
	}
	
	printf("\nBuyukten Kucuge Siralama: ");
	for(i=9; i>-1; i--) 
	{
		printf(" %d ", dizi[i]);
	}
	
	getch();
	return 0;
}
