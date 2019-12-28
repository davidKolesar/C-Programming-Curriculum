#include <stdio.h>
#include <stdlib.h>

int main()
{
    char output[] = "randomString20charsX";
    size_t numberOfCharsInOutput = strlen(output);
    char charset[] = "0123456789"
                     "!@#$%^&*"
                     "abcdefghijklmnopqrstuvwxyz"
                     "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    size_t numberOfCharsInCharset = strlen(charset);


    for(int i = 0; i < numberOfCharsInOutput; i++)
    {
       int randomNumber = (rand() % (numberOfCharsInCharset - 0 + 1)) + 0;
       char charToAdd = charset[randomNumber];
        // append ch to str
        strncat(output, &charToAdd, i);
    }
    printf("%s\n", output);
    return 0;
}
