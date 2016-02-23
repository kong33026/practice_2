#include<stdio.h>
#include "calculate_process.h"

main(int argc, char *argv[])
{
	int number ;
	long fact = 1;
	
		printf ("enter a number to calculate it's factorial\n");
		scanf("%d",&number);
		
		printf ("%d!=%ld\n", number, factorial(number));
		
	return 0;
}


