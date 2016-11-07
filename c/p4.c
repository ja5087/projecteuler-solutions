#include <stdio.h>
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome(int num); //prototype


int main()
{
	int i;

	unsigned int lpalindrome = 0; //didnt need the unsigned int but good anyway 
	for(i=100;i<1000;i++) //loop starting from 100 to 999 for the first factor
	{
		int y;
		for(y=100;y<=i;y++) //loop for y and multiply only up until y=i to avoid duplicate multiplication and save time
		{
			if(isPalindrome(y*i) && ((y*i) >= lpalindrome)) //records new value if product yi is palindrome and its larger than current largest palindrome
			{
				lpalindrome = y*i;
				printf("new largest palindrome found: %i, made from %i, %i\n", lpalindrome, i, y); //print to console
			}
		}
	}
	printf("largest palindrome found: %i\n", lpalindrome); //report final value
}


int isPalindrome(int num)
{
	char revcharnum[3]; //assumed 3digit
	char charnum[3];
	itoa(num,charnum,10); //itoa to char array
	itoa(num,revcharnum,10);
	strrev(revcharnum); //reverse in place
	if(strcmp(charnum,revcharnum)!=0) //compare and if not equal return 0 (false)
		return 0;
	return 1; //otherwise return 1 for true.
	
}


