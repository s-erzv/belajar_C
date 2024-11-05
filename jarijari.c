#include <stdio.h>


int main(void) {
	float jejari;
	float luas;
	const float pi = 3.14;
	
    printf("\n\n\n Masukkan Jejari: ");
    scanf("%f", &jejari);

    luas = pi * jejari * jejari;
	printf("\nLuas lingkaran adalah = %5.3f", luas);
	printf("\n Alamat Memory = %x", pi);
    return (0);
}

