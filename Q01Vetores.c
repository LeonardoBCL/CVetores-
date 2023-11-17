/* Questão Vetores:
Crie um algoritmo que receba do usuário valores
e armazene em um vetor 5 números. Caso seja informado
um VALOR NEGATIVO, atribua o valor 0.
No final, também liste todos valores dos vetores. */

//Includes:
#include<stdlib.h>
#include <stdio.h>

//Montagem de solução:

int main(){
    
    //Variáveis:
    int valor [5];
    int contador = 0;
    int contavez = 1;
    int contador_2 = 0;

    //Resolução lógica:

    for (contador = 0; contador < 5; contador++){
    printf("Por favor, insira o %d valor: ", contavez ++);
    scanf("%d", &valor[contador]);
    }

    for(contador_2 = 0; contador_2 < 5; contador_2++){
        if (valor[contador_2] < 0){
            valor[contador_2] = 0;
        }
    }

    for (contador = 0; contador < 5; contador++){
    
    printf( "\n Valores: %d", valor[contador]);

    }


}

