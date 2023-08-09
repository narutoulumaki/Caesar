#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int cap(int num)
{
    char a = 65 + num;
    return a;
}

int sma(int no)
{
    char b = 'a' + no;
    return b;
}

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        printf("Success\n");
        printf("%s\n", argv[1]);
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    int k, key;
    key = 0;
   for (int i = 0, n = strlen(argv[1]); i < n; i++)
   {
       k = argv[1][i] - '0';
       key = key * 10 + k;
   }
    printf("plaintext: ");
    string original = get_string("");
    int len = strlen(original);
    printf("%i\n", len);
    char ciphers[len];

    for (int j=0; j < len; j++)

    {
        if (original[j] == ',' || original[j] == ' ' || original[j] == '!')
        {
            ciphers[j] = original[j];
        }
        else if (isupper(original[j]))
        {
        int x = ((original[j] - 65) + key) % 26;

        ciphers[j] = cap(x);
        }
         else if (islower(original[j]))
        {
        int x = ((original[j] - 'a') + key) % 26;

        ciphers[j] = sma(x);
        }
        printf("%c", ciphers[j]);
    }
    printf("\n");
}


