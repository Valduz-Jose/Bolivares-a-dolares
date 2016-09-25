#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float bolivares,unidadcambiara,resultado;
	int continuar;
	system("cls");
	fflush(stdin);
	system("color 0F");
	do{
		printf("\t\t\t\t\tCalculadora de Bolivares a Dolares\t\t\t\t\t");
		printf("\n\n\t\tIntrodusca el valor de unidad cambiar%ca (SIMADI): ",161);
		scanf("%f",&unidadcambiara);
		printf("\n\t\tBolivares a convertir: ");
		scanf("%f",&bolivares);
		resultado=bolivares/unidadcambiara;
		printf("\n\n\t\tSon %.2f %c (dolares)",resultado,36);
		printf("\n\n\n\t\t\tIntroduce (0) para continuar: ");
		scanf("%d",&continuar);
		system("cls");
	}while(continuar==0);
	printf("\t\t\t\t\tCalculadora de Bolivares a Dolares\t\t\t\t\t");
	printf("\n\n\n\t\t\t\t\t%cHasta Luego%c\t\t\t\t",36,36);
	
	return 0;
}
