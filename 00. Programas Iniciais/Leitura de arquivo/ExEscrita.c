#include <stdio.h>

int main()
{
    int conta;      //Numero da conta
    char nome[30];  //Nome do cliente
    double saldo;   //Saldo do cliente
    int i;

    FILE *ptrArquivo = fopen("clientes.dat", "a") ; //Ponteiro para abrir o arquivo

    if(ptrArquivo == NULL)
    {
        printf("Arquivo não pode ser aberto");
    }
    else
    {
        //Exibe info para usuario
        printf("Digite o nome e o saldo.\n");
        printf("Digite fim de arquivo para terminar a entrada. (^z)\n");
        printf("?");
        //Coleta informacoes
        scanf("%s %lf", nome, &saldo);

        i = 1;

        //Loop para repetir o processo
        while( !feof(stdin) )
        {
            //Grava no arquivo
            fprintf(ptrArquivo, "%d %s %.2f\n", i, nome, saldo);

            //Coleta novas informacoes
            printf("?");
            scanf("%s%lf", nome, &saldo);
            i++;
        }
        //Fecha o arquivo
        fclose(ptrArquivo);
    }

    return 0;
}