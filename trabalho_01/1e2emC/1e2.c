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

short adjIgual(int num){
    int anterior=0, atual =0;
    while(num != 0){
        anterior = atual;
        atual = num%10;
        num = num/10;
        if(anterior == atual) return(1);
    }
    return(0);
}

int main(){
    int aux=0, numero;
    while(1){
        system("cls");
        printf("se quiser sair, digite -1, se nao, introduza o numero a ser operado: ");
        scanf("%d", &numero);
        if (numero == -1) break;
        printf("\nqual exercicio deseja acessar:\n");
        printf("1 - soma dos digitos e primalidade\n");
        printf("2 - digitos adjacentes iguais\n");
        printf("\n\nexercicio numero: ");
        scanf("%d", &aux);
        if(aux == 1){
            int soma=0;
            soma = somaDigitos(numero);
            printf("a soma dos digitos de %d e igual a %d", numero, soma);
            if (isPrimo(soma)) printf(", que e numero primo\n");
            else printf(", que nao e numero primo\n");
            system("pause");
        }
        if(aux == 2){
            if(adjIgual(numero)) printf("o numero %d tem digitos adjacentes iguais!\n", numero);
            else printf("o numero %d nao tem digitos adjacentes iguais\n", numero);
            system("pause");
        }
    }
}
