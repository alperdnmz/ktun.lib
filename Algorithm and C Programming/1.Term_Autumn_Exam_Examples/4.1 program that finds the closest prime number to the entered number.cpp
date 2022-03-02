#include <stdio.h>
#include <conio.h>

int main() 
{
	printf("TR-Girilen Sayiya Yakin En Yakin Asal Sayiyi Bulan Program\n");
	printf("EN-Program That Finds The Closest Prime Number To The Entered Number\n");
	printf("--------------------------------------------------------------------\n");
	
	int i,j,k,sayi,gecici1,gecici2,sayac1=0,sayac2=0;
	
	printf("Sayiyi Giriniz (Enter The Number): ");
	scanf("%d", &sayi);
	
	for(i=2;i<sayi;i++) 
	{
		if(sayi%i==0) 
		{
			printf("\nSayi Asal degildir (Number is not prime)");
			break;
		}
	}
	
	gecici1=sayi;
	gecici2=sayi;
	
	for(j=2; j<gecici1; j++) 
	{
		if(gecici1%j==0) 
		{
			gecici1--;
			sayac1++;
		}
	}
	
	for(k=2; k<gecici2; k++) 
	{
		if(gecici2%2==0) 
		{
			gecici2++;
			sayac2++;
		}
	}
	
	if(sayi==gecici1 || sayi==gecici2) 
	{
		printf("\nSayi Asaldir (Number is prime)\n");
	}
	else 
	{
		if(sayac1<sayac2) 
		{
			printf("\n%d sayisina en yakin asal sayi %dir (The closest prime number to %d is %d)",sayi,gecici1,sayi,gecici1);
		}
		else if(sayac1>sayac2) 
		{
			printf("\n%d sayisina en yakin asal sayi %dir (The closest prime number to %d is %d)", sayi,gecici2,sayi,gecici2);
		}
		else 
		{
			printf("\n%d sayisina en yakin asal sayi %d ve %ddir (The closest prime number to %d are %d and %d)",sayi,gecici1,gecici2,sayi,gecici1,gecici2);
		}
	}
	getch();
	return 0;
}
