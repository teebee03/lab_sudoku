#include<stdio.h>
#include "bertelli.h"
#define DIM 9
void cancella_valore(int sudoku[][DIM],int schema[][DIM])
{
	int r,c,val;
	printf("inserisci riga da modificare: ");
	scanf("%d",&r);
	printf("inserisci colonna da modificare: ");
	scanf("%d",&c);
	printf("inserisci valore da sostituire: ");
	scanf("%d",&val);
	if(coordinate_valide(r,c)==1)
	{
		if(schema[r][c]==0)
		{
			if(sudoku[r][c]!=0)
			{
				sudoku[r][c]=0;
				printf("\ndato cancellato correttamente\n");
			}
		}
		else
		{
			printf("\nerrore: impossibile cancellare un valore dallo schema iniziale\n");
		}
	}
	else
	{
		printf("\nerrore: coordinate inserite non valide\n");
	}
	
}

int coordinate_valide(int r,int c)
{
	int valide=0;
	if(r<DIM && r>=1 && r<DIM && r>=1)
	{
		valide=1;
	}
	else
	{
		valide=0;
	}
	return valide;
}