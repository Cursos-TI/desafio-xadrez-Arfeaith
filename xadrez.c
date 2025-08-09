#include <stdio.h>

int main() {

    int torre = 1;
    int bispo = 1;
    int rainha = 1;
    int cavalo = 1;

    printf("Movimento da torre:\n");

    for (torre; torre <= 5; torre++)
    {
        printf("Direita\n");
    }

    printf("\nMovimento do bispo:\n");

    do
    {

        printf("Cima, Direita\n");
        bispo++;

    } while (bispo <= 5);
    
    printf("\nMovimento da rainha:\n");

    while (rainha <= 8)
    {
        printf("Esquerda\n");
        rainha++;
    }

    while (cavalo <= 1)
    {

        printf("\nMovimento do cavalo:\n");

        for (int i = 0; i < 2; i++)
        {
            printf("Cima\n");
        }
    
        printf("Direita\n");
        cavalo++;
    }
    
    

    return 0;
}
