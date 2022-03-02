#include <stdio.h>
#include <conio.h>

int main() 
{
	int i,sayi1,sayi2,ebob,ekok;
	printf("1.Sayiyi Giriniz: ");
	scanf("%d", &sayi1);
	printf("2. Sayiyi Giriniz: ");
	scanf("%d", &sayi2);
	
	for(i=2; i<sayi1 && i<sayi2; i++) 
	{
		if(sayi1 %i==0 && sayi2 %i==0)
		{
			ebob=i;
		}
	}
	ekok= (sayi1*sayi2)/ebob;
	printf("Sayilarin Ebobu: %d", ebob);
	printf("\nSayilarin Ekoku: %d",ekok);
	
	getch();
	return 0;
}
