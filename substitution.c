#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
//hello graby

int main(int argc, char *argv[])
{
    if (argc != 2) //checks for 1 command line arg
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    if (strlen(argv[1]) != 26)  //checks for 26 chars in argv[1]
    {
        printf("Must inlcude 26 chars, Usage: ./substitution key\n");
        return 1;
    }

    string key = argv[1];

    for (int i = 0; i < 26; i++)
    {
        if (isalpha(key[i]) == false) //checks for alphabetical chars
        {
            printf("Non-alphabetical char, Usage: ./substitution key\n");
            return 1;
        }


        for (int n = i + 1; n < 26; n++)
        {
            if (tolower(key[i]) == tolower(key[n])) //detects repeat chars
            {
                printf("Repeat character, Usage: ./substitution key\n");
                return 1;
            }
        }
    }

    //main body
    string text = get_string("plaintext: ");
    printf("ciphertext: ");

    for (int i = 0; i < strlen(text); i++)
    {
        if ((text[i] >= 65) & (text[i] <= 90)) // for uppercase
        {

            printf("%c", toupper(key[text[i] - 65]));

        }

        else if ((text[i] >= 97) & (text[i] <= 122)) //for lowercase
        {
            printf("%c", tolower(key[text[i] - 97]));
        }

        else //for non alphabetical chars
        {
            printf("%c", text[i]);
        }
    }
    printf("\n");
    return 0;
}
