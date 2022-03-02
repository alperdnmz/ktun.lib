#include <stdio.h>
#include <conio.h>

int main() {
	printf("TR-Negatif Sayi Girilene Kadar Girilen Asal SAyilarin Toplamini ve Ortalamasini Ekrana Yazdiran Program\n");
	printf("EN-A Program That Prints The Sum and Average of The Prime Numbers Entered Until a Negative Number is Entered\n");
	printf("------------------------------------------------------------------------------------------------------------\n");
	int i,girilen,kontroldegiskeni=0;
	int whilekontrol=0;
	int asaltoplam=0;
	int sayac=0;
	float ort;
	
	while(whilekontrol==0) {
		printf("Sayiyi Giriniz: ");
		scanf("%d",&girilen);
		
		if(girilen<0) {
			whilekontrol=1;
		}
		else 
		{
			kontroldegiskeni=0;
			for(i=2; i<girilen; i++) {
				if(girilen %i==0) {
					kontroldegiskeni=1;
				}
				if(kontroldegiskeni==1) break;
			}
			if(kontroldegiskeni==0) {
				asaltoplam+= girilen;
				sayac++;
			}
		}
	}
	printf("Asal Sayilarin Toplami: %d",asaltoplam);
	ort=(float)asaltoplam/(float)sayac;
	printf("\nAsal Sayilarin Aritmetik Ortalamasi: %1.2f",ort);
	
	getch();
	return 0;
}
