#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int somaDigitos(int num){
    int soma=0;
    while(num !=0){
        soma += num%10;
        num = num/10;
    }
    return(soma);
}

short isPrimo(int num){
    if(num == 1) return(0);
    if (num == 2) return(0);
    if (num%2 == 0) return(0);
    int impar = 3;
    while(impar<(int)sqrt(num)){
        if(num%impar == 0) return(0);
        else impar = impar+2;
    }
    return(1);
}

int main(){
    int aux=0;
    while(aux != -1){
        system("cls");
        printf("qual exercicio deseja acessar:\n");
        printf("1 - soma dos digitos e primalidade\n");

        printf("\n\nexercicio numero: ");
        scanf("%d", &aux);
        if(aux == 1){
            int numero, soma;
            printf("introduza um numero: ");
            scanf("%d", &numero);
            soma = somaDigitos(numero);
            printf("a soma dos digitos de %d e igual a %d", numero, soma);
            if (isPrimo(soma)) printf(", que e numero primo\n");
            else printf(", que nao e numero primo\n");
            system("pause");
        }
    }
}
