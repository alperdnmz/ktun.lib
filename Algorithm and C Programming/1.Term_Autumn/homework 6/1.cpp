#include <stdio.h>
#include <conio.h>

int faktoriyel(int a)
{
	int sonuc=1;
	
	for(int i=1;i<=a;i++)
	{
		sonuc*=i;
	}
	return sonuc;
}

int permutasyon(int a,int b)
{
	int sonuc;
	sonuc=faktoriyel(a)/faktoriyel(a-b);
	return sonuc;
}

int kombinasyon(int a,int b)
{
	int sonuc;
	sonuc= permutasyon(a,b)/faktoriyel(b);
	return sonuc;
}

int main()
{
	int n,r;
	printf("N'yi giriniz: ");
	scanf("%d",&n);
	printf("r'yi giriniz: ");
	scanf("%d",&r);
	
	printf("Kombinasyon: %d",kombinasyon(n,r));
	
	getch();
	return 0;
}

