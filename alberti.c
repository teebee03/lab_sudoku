#include<stdio.h>
#include "alberti.h"
#define DIM 9

int check(int mat[][DIM])
{
	int i,j,back,ugu,piena;
	piena=0;
	for(i=0;i<DIM;i++)
	{
		for(j=0;j<DIM;j++)
		{
			ugu=0;
			if(mat[i][j]!=0)
			{
				for(back=j-1; j>0 && ugu==0; j--) /*Controlla righe*/
				{
					if(mat[i][j]==mat[i][back])
						ugu=1;
				}
				for(back=i-1; i>0 && ugu==0; i--) /*Controlla colonne*/
				{
					if(mat[i][j]==mat[back][j])
						ugu=1;
				}
			}
			else if(!piena)
				piena=1;
		}
	}
	if(!ugu)
	{
		if(piena)
			printf("CORRETTA");
		else
			printf("VALIDA");
		return 1;
	}	
	else
	{
		printf("ERRATA");
		return 0;
	}
}