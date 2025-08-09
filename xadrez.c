#include <stdio.h>

//Criando funções recursivas para as peças
void moverTorre (int casasTorre){
    if (casasTorre > 0)
    {
        printf("Direita\n");
        moverTorre(casasTorre - 1);
    }
    
}

void moverBispo (int casasBispo){
    if (casasBispo > 0)
    {
        printf("Cima, Direita\n");
        moverBispo(casasBispo - 1);
    }
    
}

void moverRainha (int casasRainha){
    if (casasRainha > 0)
    {
        printf("Esquerda\n");
        moverRainha(casasRainha - 1);
    }
    
}

int main() {

    //Criando variável para o caso especial do cavalo
    int cavalo = 1;

    //Imprimindo as funções recursivas
    printf("Movimento da torre:\n");

    moverTorre(5);

    printf("\nMovimento do bispo:\n");

    moverBispo(5);
    
    printf("\nMovimento da rainha:\n");

    moverRainha(8);

    //Criando o loop para o movimento do cavalo
    while (cavalo > 0)
    {

        printf("\nMovimento do cavalo:\n");

        for (int i = 2; i > 0; i--)
        {
            printf("Cima\n");
        }
    
        printf("Direita\n");
        cavalo--;
    }

    return 0;
}