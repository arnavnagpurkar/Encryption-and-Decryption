#include <stdio.h>
#include <string.h>

void encrypt(char *str)
{
    char *ptr = str;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
}

void decrypt(char *str)
{
    char *ptr = str;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
}

int main()
{
    char str[100];
    int stinp = -1; // Initialize stinp to a non-zero value to enter the loop
    while (stinp != 0)
    {
        printf("Enter 1 to Encrypt the message, 2 to decrypt the message, and 0 to exit: \n");
        scanf("%d", &stinp);
        getchar(); // Consume the newline character after the number input

        // fflush(str);
        if (stinp == 1)
        {
            printf("Enter a message to be encrypted (Max 100 characters):\n");
            gets(str);
            encrypt(str);
            printf("The Encrypted message is: %s\n", str);
        }
        else if (stinp == 2)
        {
            printf("Enter an encrypted message to be decrypted:\n");
            gets(str);
            decrypt(str);
            printf("The decrypted message is: %s\n", str);
        }
        else if (stinp != 0)
        {
            printf("Invalid Option Selected, Try again!\n");
        }
    }

    return 0;
}
