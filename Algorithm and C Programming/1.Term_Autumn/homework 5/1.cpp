#include <stdio.h>
#include <conio.h>

int main() 
{
	char text[100];
	int sayac=1;
	
	printf("Metni giriniz: ");
	gets(text);
	
	for(int i=0;text[i]!=NULL;i++) 
	{
		if(text[i]==' ') 
		{
			sayac++;
		}
	}
	printf("Metniniz %d kelimeden oluþuyor", sayac);
}
