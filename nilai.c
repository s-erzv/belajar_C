#include <stdio.h>
int main()
{
    int x,y,z,a; 
    float b,c,d;
    a=scanf("%i %i %i",&x,&y,&z);
    printf("Masukkan nilai pecahan b c d:"); 
    scanf("%f %f %f",&b,&c,&d);
    printf("Masukkan nilai Var x : "); 
    scanf("%o", &x);
    printf("\nJumlah input: %i",a);
    printf("\nNilai Var X Oktal: %o \nNilai Var X Dec: %d \nNilai Var X Hexa: %x \nNilai Var X Binner: %b ", x,x,x,x);
    printf("\nNilai b c d : %2.1f %2.2f %2.3f", b,c,d);
    printf("\nAlamat memory: %x %x %x", a);
}

