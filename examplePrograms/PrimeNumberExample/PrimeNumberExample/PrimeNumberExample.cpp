// PrimeNumberExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int
main()
{
    int userInput, i, isPrime = 0;
    printf("This program calculates if a positive integer is prime. \n");
    printf("Enter a positive integer: ");
    scanf_s("%d", &userInput);

    for (i = 2; i <= userInput / 2; ++i)
    {
        if (userInput % i == 0)
        {
            isPrime = 1;
            break;
        }
    }

    if (userInput == 0 || userInput == 1 || userInput == 2)
    {
        isPrime = 1;
    }

    if (isPrime == 1)
    {
        printf("%d is not a prime number.", userInput);
    }
    else
    {
        printf("%d is a prime number.", userInput);
    }
    return 0;
}
