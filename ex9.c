/*Escreva um programa que:
 Crie/abra um arquivo texto de nome ”arq.txt”.
 Permita que o usu´ario entre com diversos caracteres nesse arquivo, at´e que o usu´ario entre
com o caractere ’0’.
 Feche o arquivo.
Agora, abra e leia o arquivo, caractere por caractere, e escreva na tela todos os caracteres
armazenados.*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arq;
    char c;

    arq = fopen("arq.txt", "w");

    if (arq == NULL) {
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    printf("Digite os caracteres: ");
    scanf(" %c", &c);  // Adiciona um espaço antes do %c para ignorar espaços em branco

    while (c != '0') {
        fprintf(arq, "%c", c);
        scanf(" %c", &c);  // Adiciona um espaço antes do %c para ignorar espaços em branco
    }

    fclose(arq);

    arq = fopen("arq.txt", "r");

    if (arq == NULL) {
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    printf("Caracteres: ");
    while (fscanf(arq, "%c", &c) == 1) {
        printf("%c", c);
    }
    printf("\n");

    fclose(arq);

    return 0;
}
