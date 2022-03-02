#include <stdio.h>
#include <conio.h>

int main() 
{
	char metin[100];
	int i;
	
	printf("Metni Giriniz: ");
	gets(metin);
	
	int asciifark= 'a' - 'A';
	
	printf("Sonuc: ");
	while(metin[i]!='\0') 
	{
		if(metin[i]>='A' && metin[i]<='Z') 
		{
			metin[i]+=asciifark;
		}
		else if(metin[i]>='a' && metin[i]<='z') 
		{
			metin[i]-=asciifark;
		}
		printf("%c",metin[i]);
		i++;
	}
	
}
