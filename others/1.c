#include <stdio.h>

int main() {
	char nama1[32];
	char nama2[32];
	
	printf("Masukkan nama kamu: ");
	gets(nama1);
	
	printf("Masukkan nama kamu: ");
	scanf("%s", &nama2);
	
	printf("Hai, %s! (nama1)\n", nama1);
	printf("Hai, %s! (nama2)\n", nama2);
	
	int a1, a2, a3;
	
	printf("Masukkan 3 integer: ");
	scanf("%d %d %d", &a1, &a2, &a3);
	
	printf("%d %d %d", a1, a2, a3);
}
