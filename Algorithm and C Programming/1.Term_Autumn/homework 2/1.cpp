#include <stdio.h>
#include <conio.h>

int main() {
	
	printf("Universite Ders Ortalamasi Hesaplama Programi / Gecme Notu:50\n");
	printf("University Course Average Calculation Program / Late Note:50\n");
	printf("-------------------------------------------------------------\n");
	
	int vize, final, but;
	float ortalama, butortalama;
	printf("Vize Notunu Giriniz: \n");
	scanf("%d", &vize);
	printf("Final Notunu Giriniz: \n");
	scanf("%d", &final);
	ortalama= (0.4*vize) + (0.6*final);
	printf("Dersinizin Donem Ortalamasi: %2.2f", ortalama);
	
	if(ortalama>=60) {
		printf("Gectiniz\n");
	}
	else {
		printf(" Dersten kaldiniz butunlemeye girmeniz gerekir \n");
	printf("Lutfen butunleme notunuzu giriniz\n");
	scanf("%d", &but);
	butortalama= (0.4*vize) + (0.6*but);
	}

	if(butortalama>=60) {
		printf("Gectiniz");
	}
	else {
		printf("Kaldiniz");
	}
	
	getch();
	return 0;
}
