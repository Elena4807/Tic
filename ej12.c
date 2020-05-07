#include <conio.h>
#include <stdio.h>

// Una función que intercambie
void intercambio(int * a, int * b){
    int i = *a;
    *a = *b;
    *b = i;
}

int main()
{
    int a,b;

    printf( "\n   Introduzca un valor a : " );
    scanf( "%d", &a );
    printf( "\n   Introduzca un valor b: " );
    scanf( "%d", &b);

    printf( "\n   Intercambiando los valores..." );
    

    intercambio(&a, &b);
    printf( "\n\n   Ahora, el valor de a es: %d", a );
    printf( "\n\n   Ahora, el valor de b es: %d", b );

    return 0;
}
