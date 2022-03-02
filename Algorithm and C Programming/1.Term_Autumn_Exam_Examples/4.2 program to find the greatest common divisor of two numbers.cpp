#include <stdio.h>
#include <conio.h>

int main() 
{
	printf("TR-Iki sayinin en buyuk ortak bolenini bulan program \n");
	printf("EN-Program To Find The Greatest Common Divisor Of Two Numbers\n");
	printf("-------------------------------------------------------------\n");
	
	int i,sayi1,sayi2,enkucuk,sonuc;
	
	printf("1. Sayiyi Giriniz (Enter The 1st Number): ");
	scanf("%d", &sayi1);
	printf("\n2.Sayiyi Giriniz (Enter The 2st Number): ");
	scanf("%d", &sayi2);
	
	if(sayi1<sayi2) 
	{
		enkucuk=sayi1;
	}
	else if(sayi2<sayi1) 
	{
		enkucuk=sayi2;
	}
	else 
	{
		enkucuk=sayi1;
	}
	
	for(i=2; i<=enkucuk; i++) 
	{
		if(sayi1%i==0 && sayi2%i==0) 
		{
			sonuc=i;
		}
	}
	printf("Sonuc (Result): %d", sonuc);
	
	getch();
	return 0;            
}
