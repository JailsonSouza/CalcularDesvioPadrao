/*
Faça um programa que calcule o desvio padrão d de um vetor V contendo n números em que m é a média desse vetor.
Considere n=10. O vetor v deve ser lido do teclado. DICA: a biblioteca math.h possui a função sqrt() que calcula
a raiz quadrada de um número
*/
#include <stdio.h>
#include <math.h>

int main() {
    int cont;
    //float vet[10] = {1,23,3,4,15,61,7,58,92,10};
    float somatorio, media, result;
    float vet[10];
    // preencher os valores do vetor
    for (cont=0;cont < 10; cont ++){
        printf("Informe o %f valor do vetor: ", cont+1);
        scanf("%f", vet[cont]);
    }
    
    for (cont=0;cont < 10; cont ++){
        somatorio += vet[cont];
    }
    media = somatorio / 10.0;
    somatorio = 0;

    for (cont = 0; cont < 10; cont++){
        somatorio += pow(vet[cont] - media, 2);
    }

    result = sqrt(somatorio/9);
    
    printf("Desvio Padrao: %.2f\n", result);
    return 0;
}
