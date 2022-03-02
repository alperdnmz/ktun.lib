#include <stdio.h>

int main() 
{
	struct ders
	{
		int ders_kodu;
		int vize;
		int final;
		float gecme_notu;
	};
	
	struct ogrenci_bilgileri 
	{
		char ogr_adi[50];
		char ogr_soyadi[50];
		int ogr_no;
		struct ders dersler[5];
	};
	
	struct ogrenci_bilgileri ogrenciler[5];
	
	for(int i=0;i<5;i++)
	{
		printf("%d-) Ogrenci Adi Gir: ",i+1);
		scanf("%s",&ogrenciler[i].ogr_adi);
		printf("%d-) Ogrenci Soyadi Gir: ",i+1);
		scanf("%s",&ogrenciler[i].ogr_soyadi);
		printf("%d-) Ogrenci No Gir: ",i+1);
		scanf("%d",&ogrenciler[i].ogr_no);
		for(int k=0;k<5;k++) 
		{
			printf("%d-) Ders Kodu Gir: ",k+1);
			scanf("%d",&ogrenciler[i].dersler[k].ders_kodu);
			printf("%d-) Vize Notu Gir: ",k+1);
			scanf("%d",&ogrenciler[i].dersler[k].vize);
			printf("%d-) Final Notu Gir: ",k+1);
			scanf("%d",&ogrenciler[i].dersler[k].final);
			ogrenciler[i].dersler[k].gecme_notu=(float)(ogrenciler[i].dersler[k].vize*0.4)+(float)(ogrenciler[i].dersler[k].final*0.6);
		}
		printf("\n");
	}
	
	printf("\n OGRENCÝLER \n");
	
	for(int i=0;i<5;i++) 
	{
		printf("Adi:%s | Soyadi:%s | Ogr. No:%d\n",ogrenciler[i].ogr_adi,ogrenciler[i].ogr_soyadi,ogrenciler[i].ogr_no);
		printf("Gecme Notlari -> ");
		for(int k=0;k<5;k++) 
		{
			printf("%d.ders:%1.2f - ",k+1,ogrenciler[i].dersler[k].gecme_notu);
		}
		printf("\n\n");
	}
}
