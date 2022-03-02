#include <stdio.h>
#include <conio.h>

int main() {

	int sayi, s, sayac=0, toplam=0;
	
	printf("TR-Girilen sayiya kadar olan çift sayilarin toplamini ve ortalamasini yazan program\n");
	printf("EN-A Program That Prints The Sum and Average of Even Numbers up to The Entered Number\n");
	printf("-------------------------------------------------------------------------------------\n");
	printf("Sayiyi giriniz (Enter The Number): ");
	scanf("%d",&sayi);
	
	for(s=0; s<=sayi; s++) {
		
		if(s %2==0) {
		toplam = toplam + s;
		sayac++;
		}	
	}
	printf("Sayilarin Toplami (Sum of Numbers): %d\n", toplam);
	printf("Sayilarin ortalamasi (Average of Numbers): %d",toplam/sayac);
	
	getch();
	return 0;
}
