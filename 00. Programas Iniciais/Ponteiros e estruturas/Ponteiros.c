#include <stdio.h>

int main()
{
    int *ptr;
    int x = 10;
    int y = 3;

    printf("Endereco do ponteiro: %d\n", &ptr);
    printf("Endereco de x: %d\n", &x);
    printf("Endereco de y: %d\n", &y);


    printf("Conteudo do ponteiro: %d\n", ptr);
    printf("Conteudo do x: %d\n", x);
    printf("Conteudo do y: %d\n", y);

    ptr = &x;
    printf("Conteudo do ponteiro: %d\n", ptr);
    printf("Conteudo do elemento que o ponteiro esta apontando: %d\n", *ptr);

    ptr = &y;
    printf("Conteudo do ponteiro: %d\n", ptr);
    printf("Conteudo do elemento que o ponteiro esta apontando: %d\n", *ptr);

    *ptr = 20;
    printf("Conteudo do elemento que o ponteiro esta apontando: %d\n", *ptr);
    
    printf("Conteudo do x: %d\n", x);
    printf("Conteudo do y: %d\n", y);

    return 0;
}