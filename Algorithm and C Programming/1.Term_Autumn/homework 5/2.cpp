#include <stdio.h>
#include <conio.h>

int main() 
{
	char metin[100],aranan[100];
	int i,j,k,sayac1=0,sayac2=0;
	
	printf("Metin Giriniz: ");
	gets(metin);
	printf("Aramak istediginiz kelimeyi giriniz: ");
	gets(aranan);
	
	for(sayac1=0;aranan[sayac1]!=NULL; sayac1++);

	for(i=0;metin[i]!=NULL;i++) 
	{
		for(j=i,k=0; metin[j]==aranan[k] && aranan[k]!=NULL;j++,k++);
		
		if(k>0 && aranan[k]==NULL)
		{
			sayac2++;
			printf("%d - %d indeksleri arasinda\n",i+1,i+sayac1);
		}
	}
	
	if(sayac2==0) 
	{
		printf("Aradiginiz kelime metinde bulunmamaktadir!!!");
	}
	else 
	{
		printf("Aradiginiz kelimeden metinde %d tane vardir",sayac2);
	}
}
