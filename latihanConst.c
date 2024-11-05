#include <stdio.h>

int main(void){
	const  char x[20] = "Kelas 1C DDP";
	const float t =0.5;
	const int alas = 10;
	const int tinggi = 10;
	
	printf("\n\nLatihan Konstanta %s", x);
	printf("\n Alas Segitiga %d", alas);
	printf("\n Tinggi Segitiga %d", tinggi);
	printf("\n Luas Segitigas %f", alas*tinggi*t);
	printf("\n Alamat Memory :  %x", &t);
	
	return 0;
}
