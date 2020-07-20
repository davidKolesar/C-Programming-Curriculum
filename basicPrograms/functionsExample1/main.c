#include <stdio.h>

main()
{
	int userInput, i, isValid, isPrime = 0;
	printf("This program retuns 'a' if '1' is input. \n");
	printf("This program retuns 'b' if '2' is input. \n");
	printf("This program retuns 'ab' if '3' is input. \n");

    
    //perform user validation
	while (isValid == 0)
	{   
	    printf("Enter 1, 2, or 3:  \n");
	    scanf("%d", &userInput);

	    if( userInput <= 3 && userInput >= 1 )
	    {
	        isValid = 1;
	    }
    }
    
    if(userInput == 1)
    {
        printf("a");
    }


    if(userInput == 2)
    {
        printf("b");
    }


    if(userInput == 3)
    {
        printf("a");
        printf("b");
    }

			
	return 0;
}
