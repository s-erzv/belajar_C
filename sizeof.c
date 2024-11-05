#include <stdio.h>

int main(void) {
    printf("Sizeof Floating Point Constan :\n");
    printf(" - dgn suffix f = %d\n", sizeof(3.14f)); //dirubah jd float
    printf(" - tanpa suffix = %d\n", sizeof(3.14));//defaultnya double
    printf(" - dgn suffix L = %d\n", sizeof(3.14L));// dirubah jadi long double float

    printf("\n\nSizeof Integer Point Constan :\n");
    printf(" - tanpa suffix = %d\n", sizeof(5));//defaultnya int
    printf(" - dgn suffix U = %d\n", sizeof(5U));//diubah jadi unsigned
    printf(" - dgn suffix L = %d\n", sizeof(5L));//jadi long int
    printf(" - dgn suffix UL = %d\n", sizeof(5UL));//jadi unsigned long int

    return 0;
}

