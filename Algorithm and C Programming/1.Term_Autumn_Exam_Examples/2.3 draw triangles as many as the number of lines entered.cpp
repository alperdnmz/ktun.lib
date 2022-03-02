#include <stdio.h>
#include <conio.h>

int main() {
	
	printf("TR-Girilen Satir Sayisi Kadar Ucgen Cizdirme Programi");
	printf("EN-draw triangles as many as the number of lines entered\n");
	printf("--------------------------------------------------------\n");
	int i, u, satir;
	printf("Satir Sayisini Giriniz: ");
	scanf("%d", &satir);
	
	for(i=1; i<=satir; i++) {
		for(u=1; u<=i; u++) {
			printf("*");
		}
		printf("\n");
	}
	
	getch();
	return 0;
}
