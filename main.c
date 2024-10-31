#include <stdio.h>
#include <stdlib.h>

/*
Crie um programa que receba um texto do usuário e grave o texto em um arquivo
*/

int main()
{
    FILE *arquivo;

    arquivo = fopen("texto.txt", "w");

    char texto[50];

    printf("Digite um texto: ");
    fgets(texto, 50, stdin);
    fflush(stdin);

    fprintf(arquivo, "%s", texto);

    fclose(arquivo);

}
