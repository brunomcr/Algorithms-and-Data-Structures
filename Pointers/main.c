#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x = 2;
	int *ptr;
	ptr =&x;
	
	printf("\n Valor de x = %d",x);
	printf("\n Endereco de x = %d",&x);
	printf("\n Conteudo armazenado no ponteiro = %d",ptr);
	printf("\n Conteudo do local onde o ponteiro aponta = %d",*ptr);
	getchar();
	
	return 0;
}

