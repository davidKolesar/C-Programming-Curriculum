#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* main()
{
    char* output = "ReplaceWithRandomText";
    size_t numberOfCharsInOutput = strlen(output);
    const char charset[] = "0123456789"
                     "!@#$%^&*"
                     "abcdefghijklmnopqrstuvwxyz"
                     "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

        for (size_t i = 0; i < numberOfCharsInOutput ; i++)
        {
            int key = rand() % (int) (sizeof charset - 1);
            output[i] = charset[key];
        }
        //null terminate
        output[numberOfCharsInOutput] = '\0';

    printf("%s\n", output);
    return output;
}
