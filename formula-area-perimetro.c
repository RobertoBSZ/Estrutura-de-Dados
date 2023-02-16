#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

float calcula_forma(int tipo, int y){
    float valor, a, b, c, d;
    
    if(y == 1){
        switch(tipo){
        case 1:
            printf("Defina a base do triangulo:");
            scanf("%f", &b);
            
            printf("Defina a altura do triangulo:");
            scanf("%f", &a);
            
            valor = (b*a)/2;
            return valor;
        case 2:
            printf("Defina o lado do quadrado:");
            scanf("%f", &a);
            
            valor = a*a;
            return valor;
        case 3:
            printf("Defina a base do retangulo:");
            scanf("%f", &b);
            
            printf("Defina a altura do retangulo:");
            scanf("%f", &a);
            
            valor = b*a;
            return valor;
        case 4:
            printf("Defina o raio:");
            scanf("%f", &a);
            
            valor = 3,14*(a*a);
            return valor;
        case 5:
            printf("Defina a base maior do trapezio:");
            scanf("%f", &a);
            
            printf("Defina a base menor do trapezio:");
            scanf("%f", &b);
            
            printf("Defina a altura do trapezio:");
            scanf("%f", &c);
            
            valor = ((a+b)*c)/2;
            return valor;
        };
    }
    else{
        switch(tipo){
        case 1:
            printf("Defina o 1º lado do triangulo:");
            scanf("%f", &a);
            
            printf("Defina o 2º lado do triangulo:");
            scanf("%f", &b);
            
            printf("Defina o 3º lado do triangulo:");
            scanf("%f", &c);
            
            valor = a+b+c;
            return valor;
        case 2:
            printf("Defina o lado do quadrado:");
            scanf("%f", &a);
            
            valor = a*4;
            return valor;
        case 3:
            printf("Defina a base do retangulo:");
            scanf("%f", &b);
            
            printf("Defina a altura do retangulo:");
            scanf("%f", &a);
            
            valor = (b*2) + (a*2);
            return valor;
        case 4:
            printf("Defina o raio:");
            scanf("%f", &a);
            
            valor = 6,28*a;
            return valor;
        case 5:
            printf("Defina a base maior do trapezio:");
            scanf("%f", &a);
            
            printf("Defina a base menor do trapezio:");
            scanf("%f", &b);
            
            printf("Defina o lado esquerdo do trapezio:");
            scanf("%f", &c);
            
            printf("Defina o lado direito do trapezio:");
            scanf("%f", &d);
            
            valor = a+b+c+d;
            return valor;
        };
    }
    
}

typedef struct forma {
    int tipo;
    float area;
    float perimetro;
}forma;

int main()
{

    float resultado;
    int t;
    struct forma x;
    
    printf("\nEscolha seu tipo:\n1-triangulo\n2-quadrado\n3-retangulo\n4-circulo\n5-trapezio\n");
    scanf("%i", &x.tipo);
    
    printf("Escolha o que você quer calcular:\n1-area\n2-perimetro\n");
    scanf("%i", &t);
    
    resultado = calcula_forma(x.tipo, t);
    x.area = resultado;
    x.perimetro = resultado;
    
    if(t == 1){
        printf("Área= %.1f\n", x.area);
    }else{
        printf("Perimetro= %.1f", x.perimetro);
    };
    
    return 0;
}
