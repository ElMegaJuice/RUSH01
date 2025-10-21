#include <stdio.h>
int	split_into_blocks(int nbr, int blocks[]) 
{	

	int i;
	i = 0;

	while(nbr > 0)
	{
		blocks[i] = nbr % 1000;
		nbr / 1000;
		i++;
		
	}	
	return i;
 //fonction "sensée" écrire chaque bloc de 3 chiffres dans un tableau déclaré dans une autre fonction. Malloc pas encore pris en compte...
}

