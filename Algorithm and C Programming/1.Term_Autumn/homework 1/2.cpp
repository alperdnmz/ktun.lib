#include <stdio.h>
#include <conio.h>

int main(){

    printf("TR-Girilen Iki Sayidan Hangisi Daha Buyuktur?\n");
    printf("EN-Which of The Two Numbers Entered is Greater\n");
    printf("----------------------------------------------\n");
	float sayi1,sayi2;
	printf("L�tfen birinci say�y� giriniz (Please enter the 1st number): \n");
    scanf("%f",&sayi1);
    printf("L�tfen ikinci say�y� giriniz (Please enter the 2st number):\n");
    scanf("%f",&sayi2);
	if(sayi1>sayi2){
		printf("%.3f say�s� %.3f say�s�ndan b�y�kt�r. (The number %.3f is greater than the number %.3f)",sayi1,sayi2,sayi1,sayi2);
	}
	if(sayi1<sayi2){
		printf("%.3f say�s� %.3f say�s�ndan b�y�kt�r. (The number %.3f is greater than the number %.3f)",sayi2,sayi1,sayi2,sayi1);
	}
	else{
		printf("%.3f say�s� %.3f say�s�na e�ittir.(The number %.3f is equal to the number %.3f)",sayi1,sayi2,sayi1,sayi2);
	}
	
	getch();
	return 0;
}
