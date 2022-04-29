#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,suma=0;

    printf("Ingrese el valor de N: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)

        suma=suma+i;

    printf("La suma da: %d", suma);
    return 0;
}
