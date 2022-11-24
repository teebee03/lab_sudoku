#include <stdio.h>
#include <string.h>
#include "baglieri.h"
#include "alberti.h"
#include "bertelli.h"

#define DIM 9
#define LEN DIM*DIM

void creaMat(int[][], char[]);
int check(int[][]);
void inizializzaSudoku(int[][], int[][]);
void stampaSudoku(int[][], int[][]);
void visualizzaMenu(int[][], int[][]);

int main(int argc, char*argv[])
{
	char schema[LEN+1];
	int sudoku[DIM][DIM], sudokuIn[DIM][DIM];

	do{
		printf("Inserisci lo schema iniziale: ");
		gets(schema);
		creaMat(sudokuIn, schema);
	}while(!check(sudokuIn));

	inizializzaSudoku(sudoku, sudokuIn);
	stampaSudoku(sudoku, sudokuIn);
	visualizzaMenu(sudoku, sudokuIn);

	return 0;
}

void visualizzaMenu(int sudoku[][DIM], int sudokuIn[][DIM]){
	int scelta;

	do{
		printf("1 - avvia una nuova partita\n");
		printf("2 - inserisci valore\n");
		printf("3 - cancella valore\n");
		printf("4 - verifica la soluzione attuale\n");
		printf("5 - carica una soluzione e verificala\n");
		printf("6 - riavvia partita attuale\n");
		printf("0 - esci\n");
		scanf("%d", &scelta);
		if(scelta == 1)
			/*continua*/
	}while(scelta < 0 || scelta > 6);

}