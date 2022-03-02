#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
	int i,toplam=0,ortalti=0,ortustu=0;
	int dizi[50];
	float ort;
	srand(time(NULL));
	
	printf("Dizi: ");
	for(i=0; i<50; i++) 
	{
		
		dizi[i]=rand()%100;
		toplam+=dizi[i];
		printf("%d ",dizi[i]);
	}
	printf("\n");
	ort = (float)toplam / (float)50;
	printf("Ortalama: %1.2f",(float) ort);
	
	
	for(i=0; i<50; i++) 
	{
		if(dizi[i]>ort) 
		{
			ortustu++;
		}
		else 
		{
			ortalti++;
		}
	}
	printf("\nOrtalama altinda kalanlar: %d",ortalti);
	printf("\nortalama ustunde kalanlar: %d",ortustu);
	
	getch();
	return 0;
}
