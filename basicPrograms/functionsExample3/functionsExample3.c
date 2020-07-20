#include <stdio.h>

int
main ()
{
  int userInput, isValid, userNumber =0;
  printf ("This program can perform the following calculations:\n");
  printf ("1. Determine if the number is prime  \n");
  printf ("2. Determine the area of the number  \n");
  printf ("3. Determine if the number is prime AND determine the area of the number  \n");
  printf ("Please enter 1, 2, or 3:  \n");


    //perform user validation
	while (isValid == 0)
	{   
	    scanf ("%d", &userInput);
	    printf ("Enter 1, 2, or 3:  \n");

	    if( userInput <= 3 && userInput >= 1 )
	    {
	        isValid = 1;
	    }
    }
    
  printf ("Please enter the number you would like calculations performed on:  \n");
  scanf("%d", &userNumber);

    if(userInput == 1)
    {
        calculatePrime(userNumber);    
    }

    if(userInput == 2)
    {
        calculateArea(userNumber);    
    }

    if(userInput == 3)
    {
        calculatePrime(userNumber);    
        calculateArea(userNumber); 
    }

  return 0;
}

void calculatePrime(userNumber)
{
    int i, isPrime = 0;
for (i = 2; i <= userNumber / 2; ++i)
    {
      if (userNumber % i == 0)
    	{
    	  isPrime = 1;
    	  break;
    	}
    }

  if (userNumber == 0 || userNumber == 1 || userNumber == 2)
    {
      isPrime = 1;
    }

  if (isPrime == 1)
    {
      printf ("%d is not a prime number.", userNumber);
    }
  else
    {
      printf ("%d is a prime number.", userNumber);
    }
}

void calculateArea(userNumber)
{
     int area = 0;
     area = (int) (3.14159 * userNumber * userNumber);
     printf( "\n\nArea \ %d\n", area);
}
