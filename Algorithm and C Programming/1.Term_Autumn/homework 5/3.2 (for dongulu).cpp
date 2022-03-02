#include <stdio.h>
#include <conio.h>

int main() 
{
	char metin[100];
	int i;
	
	printf("Metni Giriniz: ");
	gets(metin);
	
	printf("Sonuc: ");
	for(i=0;metin[i]!=NULL; i++)
	{
		if(metin[i]<=90 && 65<=metin[i]) 
		{
			metin[i] = metin[i] + 32;
		}
		else if(metin[i]<=122 && 97<=metin[i]) 
		{
			metin[i] = metin[i] - 32;
		}
	}
	printf("%s", metin);
	getch();
}
