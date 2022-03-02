#include <stdio.h>
#include <conio.h>

struct isci
{
	char adi[30];
	char soyadi[30];
	int yas;
	double aylikucret;
};

struct isci bilgialma();

int main() 
{
	struct isci isci1;
	
	isci1=bilgialma();
	
	printf("\nIsci bilgileri\n");
	printf("Isim: %s\n",isci1.adi);
	printf("Soyadi: %s\n",isci1.soyadi);
	printf("Yasi: %d\n",isci1.yas);
	printf("Aylik Ucreti: %d",isci1.aylikucret);
}

struct isci bilgialma() 
{
	struct isci isci_girilen;
	
	printf("Adini Giriniz: ");
	gets(isci_girilen.adi);
	printf("Soyadini Giriniz: ");
	gets(isci_girilen.soyadi);
	printf("Yasini Giriniz: ");
	scanf("%d",&isci_girilen.yas);
	printf("Aylik Ucretini Giriniz: ");
	scanf("%d",&isci_girilen.aylikucret);
	
	return isci_girilen;
}
