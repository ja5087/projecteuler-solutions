/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <stdio.h>

int testDiv(int min, int max, int num);

int main()
{
	int num=1; //where num is the current checked number
	while(!testDiv(1,20,num)) //while testdiv returns 0. when 1 it will end loop.
	{
		num++;		//keep incrementing!
	}
	printf("smallest divisiable from 1 to 20 number: %d", num); //print result
	getchar();
}

int testDiv(int min, int max, int num)
{
	int i;
	for(i=min; i<=max; i++) //loop and check divisibility iteratively
	{
		if(num%i!=0)
		{
			return 0; //return 0 if any no. between 1 to 20 is indivisible.
		}
	}
	return 1;
}


