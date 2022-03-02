#include <stdio.h>
#include <math.h>
#include <conio.h>

int main() {
	
	int TT, TA, CC, CA, sayi;
	TT=0; TA=0; CC=1; CA=0;
	int i;
	
	for(i=0; i<4; i++) {
			printf("Lutfen Sayi Giriniz (Please Enter The Number): ");
	scanf("%d", &sayi);
	if(sayi %2==0) {
		CC*=sayi;
		CA++;
		sayi = 0;
	}
	else {
		TT+=sayi;
		TA++;
		sayi=0;
	}
		}
		printf("Tek Sayilarin Aritmetik Ortalamasi (Arithmetic Mean of Odd Numbers): %f\n", (float)TT/TA);
		printf("Cift Sayilarin Geometrik Ortalamasi (Geometric Mean of Even Numbers): %f", pow(CC,(1.0/TA)));
		
		getch();
		return 0;
}
