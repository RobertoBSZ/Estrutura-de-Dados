#include <stdio.h>
float soma (float x, float y){
  float resultado;
  return resultado = x + y;
};

float subtracao (float x, float y){
  float resultado;
  return resultado = x - y;
};

float multipicacao (float x, float y){
  float resultado;
  return resultado = x * y;
};

float divisao (float x, float y){
  float resultado;
  return resultado = x / y;
};

int main()
{
    int operation;
    float x, y, z;
    
    while(operation != 5){
        x=0; y=0; z=0; operation=0;
        
        printf("\nEscolha sua operação:\n1-Soma\n2-Subtração\n3-Multiplicação\n4-Divisão\n5-Sair\n");
        scanf("%i", &operation);
        
        if(operation <=0 || operation >5){
            printf("Escolha um número entre 1 e 5!");
        }
        
        if(operation == 5){
            printf("\nVocê escolheu sair. Saindo...");
            break;
        }
        
        else{
            printf("Primeiro número:");
            scanf("%f", &x);
            
            printf("Segundo número:");
            scanf("%f", &y);
            
            switch(operation){
                case 1:
                    printf("\nSomar!");
                    z = soma(x, y);
                    printf("\nO resultado é %.2f", z);
                    break;
                case 2:
                    printf("\nSubtrair!");
                    z = subtracao(x, y);
                    printf("\nO resultado é %.2f", z);
                    break;
                case 3:
                    printf("\nMultiplicar!");
                    z = multipicacao(x, y);
                    printf("\nO resultado é %.2f", z);
                    break;
                case 4:
                    printf("\nDividir!");
                    z = divisao(x, y);
                    printf("\nO resultado é %.2f", z);
                    break;
            }
        }
        
    }

    return 0;
}
