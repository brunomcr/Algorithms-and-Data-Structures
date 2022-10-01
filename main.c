#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	struct Alunos {
		char nome[30];
		float notaMat, notaFis, media;
	};
	
	struct Alunos alunos[5];
	int count;
	
	for(count = 0 ; count < 5 ; count++) 
	{
		fflush(stdin);
		printf("\nNome do aluno %d: ", count+1);
		gets(alunos[count].nome);
		
		printf("Nota de matematica: ");
		scanf("%f", &alunos[count].notaMat);
		
		printf("Nota de fisica: ");
		scanf("%f", &alunos[count].notaFis);
		
		alunos[count].media =  (alunos[count].notaMat + alunos[count].notaFis) / 2;
	}
	
	printf("\nExibindo nomes e medias:\n");
	
	for(count = 0 ; count < 5 ; count++)
	{
		printf("\nAluno %d\n", count+1);
		printf("Nome: %s\n",alunos[count].nome);
		printf("Media: %.2f\n", alunos[count].media);
	}
	
	
	return 0;
}
