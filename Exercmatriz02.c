#include <stdlib.h>
#include <stdio.h>

int main(){
	
	//Variações:
	int contador, qtd_nota = 0;
	float nota[2][2];
	char disciplina [3][200];
	float media[3];
	int somaNotas = 0;
	
	
	//Questão:
	for (contador = 0; contador < 3; contador++){
		printf("Insira a %d disciplina: ", contador + 1);
		scanf("%s", &disciplina);
		for (qtd_nota = 0; qtd_nota < 2; qtd_nota++){
			printf("Insira a %d nota", qtd_nota + 1);
			scanf("%f", &nota);
			
			somaNotas += nota[contador][qtd_nota];
			
		}
		
		media[contador] = somaNotas / qtd_nota;
		somaNotas = 0;
		
		fflush(stdin);
		
	}
	system("cls");
	
	for(contador = 0; contador < 3; contador++){
		printf("\n Materia: %s", disciplina[contador] );
		
		for(qtd_nota = 0; qtd_nota < 2; qtd_nota++){
		
		printf("\n Nota: ", nota[contador][qtd_nota]);
		
	}
	
	printf("\n  Media equivalente a: \n %.1f: ", nota[contador]);
	}	
	return 0;
}
