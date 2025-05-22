#include <stdio.h>

float adicao(float n1, float n2){
    float resultado;
    resultado = n1 + n2;
    printf("%.2f + %.2f = %.2f\n", n1, n2, resultado);
    return resultado;

}

float subtracao(float n1, float n2){
    float resultado;
    resultado = n1 - n2;
    printf("%.2f - %.2f = %.2f\n", n1, n2, resultado);
    return resultado;
}

float multiplicacao(float n1, float n2){
    float resultado;
    resultado = n1 * n2;
    printf("%.2f x %.2f = %.2f\n", n1, n2, resultado);
    return resultado;
}

float divisao(float n1, float n2){
    float resultado;
    resultado = n1 / n2;
    printf("%.2f / %.2f = %.2f\n", n1, n2, resultado);
    return resultado;
}

int menu(){
    int opcao;
        printf("-----MENU----\n");
        printf("1 - Adição\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão\n");
        printf("5 - Sair\n");
        scanf("%d", &opcao);
    

    return opcao;
    
}

// linha nova que vai dar conflito
// bb 

int main(){
    float n1, n2;
    int op;

    while(op != 5){
            op = menu();
        switch (op)
        {
        case 1:
            printf("Digite um numero: ");
            scanf("%f", &n1);
            printf("Digite outro numero: ");
            scanf("%f", &n2);
            adicao(n1, n2);
            break;
        case 2:
            printf("Digite um numero: ");
            scanf("%f", &n1);
            printf("Digite outro numero: ");
            scanf("%f", &n2);
            subtracao(n1, n2);
            break;
        case 3:
            printf("Digite um numero: ");
            scanf("%f", &n1);
            printf("Digite outro numero: ");
            scanf("%f", &n2);
            multiplicacao(n1, n2);
            break;
        case 4:
            printf("Digite um numero: ");
            scanf("%f", &n1);
            printf("Digite outro numero: ");
            scanf("%f", &n2);
            divisao(n1, n2);
            break;
        
        
        default:
            break;
        }
    }
    
printf("teste 123");

}