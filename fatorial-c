#include <stdio.h>
#include <stdlib.h>

int fatorial(int n);


int main(int argc, char *argv[])
{
    int numero;
    int resultado;


    // Verifica se foi passado um número pelo terminal
    if (argc > 1)
    {
        numero = atoi(argv[1]);
    }
    else
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);
    }


    resultado = fatorial(numero);


    // Mostra o resultado na tela
    printf("Fatorial de %d = %d\n", numero, resultado);
    printf("Criado por Ana\n");


    // Cria o arquivo fatorial.txt
    FILE *arquivo;

    arquivo = fopen("fatorial.txt", "w");


    if (arquivo == NULL)
    {
        printf("Erro ao criar arquivo!\n");
        return 1;
    }


    // Salva o mesmo resultado no arquivo
    fprintf(arquivo, "Fatorial de %d = %d\n", numero, resultado);
    fprintf(arquivo, "Criado por Ana\n");


    fclose(arquivo);


    return 0;
}
