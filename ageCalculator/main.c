/* This program calculates what year a person will turn 79 (average life expectancy in th US*/
#include <stdio.h>
#define TARGET_AGE 79

int birthday, expirationDate;

int calcYear(int birthday);


int main( void )
{
printf("What year were you born? ");
printf ("Enter as a 4-digit year (YYYY): ");
scanf(" %d", &birthday);

expirationDate = calcYear(birthday);

printf("A subject born in %d will be %d in %d.",
birthday, TARGET_AGE, expirationDate);

return 0;
}

int calcYear(int birthday)
{
    return(birthday+TARGET_AGE);
}
