#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define INPUT 600851475143

int main()
{
	unsigned long long lpf = 1, i = 1;
	for(i;i<INPUT;i++)
	{
		if(INPUT%i==0)
		{
			bool isPrime = true;
			for(unsigned int y=2; y*y <= i; y++ )
			{
				if(i%y==0)
				{
					isPrime = false;
					break; //crashes but wtv lol work on it later
				}
			}
			if(isPrime)
				{
					lpf=i;
					printf("prime fac: %i\n", lpf);
				}
		}
	}
	printf("largest prime fac: %i", lpf);
	getchar();
}
