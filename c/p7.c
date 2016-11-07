/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/

#include <stdio.h>
int checkPrime(int num);

int main()
{
	int count = 0; //maintain count of primes
	int currentNum = 2; //dont check 0 or 1
	while(count<10001)
	{
		
		if(checkPrime(currentNum))
		{
			count++;
			printf("%dst prime found: %d\n", count, currentNum); //print the n-st prime found
		}
		currentNum++; //increment currentNum each time
		
	}
	getchar();
}

int checkPrime(int num)
{
	int i;
	for(i=2;i*i<=num;i++) //using the property that there are no prime factors of n larger than sqrt(n)
	{
		if(num%i==0)
			return 0;	//return 0 if divisible by any num less than sqrt(n)
	}
	return 1;
}
