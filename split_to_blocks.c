#include <stdio.h>
int*	split_into_blocks(int nbr, int blocks[]) 
{	
	int n = nbr;
	int i;

	while(n > 0)
	{
		blocks[i] = n % 1000;
		n = n / 1000;
		i++;
		
	}	
	return blocks;

}

int main ()
{
	int blocks[10];
	printf("%d",split_into_blocks(432546));
}
