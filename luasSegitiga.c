#include <stdio.h>

#define Tinggi 10
#define alas 10
#define T 0.5

int main(void) {
	int i;
    printf("Alas = %d", alas);
    printf("\n");

    printf("Tinggi = %d", Tinggi);
    printf("\n");

    printf("Luas Segitiga (alas * tinggi * T) = %2.2f", alas * Tinggi * T);
    printf("\nAlamat memory: %x",&i);

    return 0;
}

