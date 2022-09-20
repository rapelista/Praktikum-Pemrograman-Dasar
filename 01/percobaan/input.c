#include <stdio.h>

int main() {
	int nilai1, nilai2, hasil;
	printf("Masukkan nilai 1: ");
	scanf("%d", &nilai1);
	printf("Masukkan nilai 2: ");
	scanf("%d", &nilai2);
	
	hasil = nilai1 + nilai2;
	printf("Maka hasil = %d\n", hasil);
	
	return 0;
}
