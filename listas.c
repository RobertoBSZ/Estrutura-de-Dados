/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int lista[10];
    int escolha_user;
    double soma = 0;
    int soma_pares = 0;
    double media_valor = 0;
    int flag = 1;
    int posicao_maior, posicao_menor;
    int contador;
    
    printf("Digite os números da lista:\n");
    for(int i; i<10; i++){
        printf("Nº %i:", i + 1);
        scanf("%i", &lista[i]);
        soma = soma + lista[i];
    }
    
    
    printf("Escolha um número para procurar\n");
    printf("Nº:");
    scanf("%i", &escolha_user);
    
    media_valor = soma/10;
    
    printf("A média é: %.1f\n", media_valor);
    
    for(int i = 0; i<10; i++){
        if(lista[i] % 2 == 0){
            soma_pares++;
        }
    }
    
    for(int i = 0; i<10; i++){
        if(escolha_user == lista[i]){
            printf("Seu número está na posição %i da lista\n", i);
            flag = 0;
        }
    }
    
    if(flag == 1){
        printf("Seu número não está na lista.\n");
    }
    printf("A lista possui %i números pares.", soma_pares);

    return 0;
}
