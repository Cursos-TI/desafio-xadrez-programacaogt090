#include <stdio.h>

int main() {

    int i;

    printf("Movimento da Torre:\n");
    for(i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    printf("\nMovimento do Bispo:\n");
    i = 0;
    while(i < 5) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\nMovimento da Rainha:\n");
    i = 0;

    do {
        printf("Esquerda\n");
        i++;
    } while(i < 8);

    return 0;
}
  