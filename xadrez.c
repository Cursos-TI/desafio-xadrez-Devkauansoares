#include <stdio.h>

//Procedimento Recursivo Torre
void torre(int controleTorre){
    if(controleTorre > 0){
        printf("Direita\n");
        torre(--controleTorre);
    }
}

//Procedimento Recursivo Bispo
void bispo(int controleBispo){
    if(controleBispo > 0){
        for (int vertical = 0; vertical < 1; vertical ++){
            printf("Cima-");
            
            for (int horizontal = 0; horizontal < 1; horizontal ++){
                printf("Direita\n");
            }
        }
        bispo(--controleBispo);
    }
}

//Procedimento Recursivo Rainha
void rainha(int controleRainha){
    if(controleRainha > 0){
        printf("Direita\n");
        rainha(--controleRainha);

    }
}

void cavalo(int controleCavalo) {

    int movimentos = controleCavalo / 3;
    for (int i = 0; i < movimentos; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Cima\n");
        }


        for (int k = 0; k < 1; k++) {
            printf("Direita\n");
        }
    }
}


int main() {

    int casasTorre = 5, casasBispo = 5, casasRainha = 8, casasCavalo = 3;
    printf("\n Jogada da Torre: \n");
    torre(casasTorre);

    printf("\n Jogada do Bispo: \n");
    bispo(casasBispo);

    printf("\n Jogada da Rainha: \n");
    rainha(casasRainha);

    printf("\n Jogada do Cavalo: \n");
    cavalo(casasCavalo);

    return 0;
}
