#include <stdio.h>

int main() {

    int a = 0;
    int b = 0;
    int c = 0;

    printf("Movimento da torre:\n");

    for (a; a <= 5; a++)
    {
        printf("Direita\n");
    }

    printf("Movimento do bispo:\n");

    do
    {

        printf("Cima, Direita\n");
        b++;

    } while (b <= 4);
    
    printf("Movimento da rainha:\n");

    while (c <= 5)
    {
        printf("Esquerda\n");
        c++;
    }
    
    

    return 0;
}
