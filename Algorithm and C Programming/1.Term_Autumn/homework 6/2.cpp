#include <stdio.h>
#include <conio.h>

int basamaktopla(int a) 
{
	int toplam=0;
	
	while(a>0)
	{
		toplam+=a%10;
		a/=10;
	}
	return toplam;
}

int main()
{
	int girilen;
	printf("Sayi giriniz: ");
	scanf("%d",&girilen);
	
	printf("Girdiginiz sayinin basamak degerleri toplami: %d",basamaktopla(girilen));
	getch();
	return 0;
}
