#include <stdio.h>
#include <conio.h>

int asalkontrol(int a)
{
	for(int i=2;i<a;i++)
	{
		if(a%i==0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int girilen;
	
	printf("Sayi giriniz: ");
	scanf("%d",&girilen);
	
	if(girilen>1)
	{
		if(asalkontrol(girilen)==0)
		{
			printf("Sayiniz Asal Degildir");
		}
		else if(asalkontrol(girilen)==1)
		{
			printf("Sayiniz Asaldir");
		}
	}
	else 
	{
		printf("Sayiniz Asal Degildir");
	}
	getch();
	return 0;
}
