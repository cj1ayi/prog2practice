#include <stdio.h>

int CountUpper(char S[])
{  
    int i;
    int upper_count = 0;
    for (i = 0; S[i] != '\0'; i++)
    {
        if (S[i] >= 'A' && S[i] <= 'Z')
            upper_count++;
    }
    return upper_count;
}

void ConvertUpper(char S[])
{
    int i;
    for (i = 0; S[i] != '\0'; i++)
    {
        if (S[i] >= 'a' && S[i] <= 'z')
            S[i] -= 32;
    }
}


int main()
{
    char S[7] = {'W','i','c','K','E','D','\0'};
    printf("Number of uppercase letters in string: %d\n",CountUpper(S));
    ConvertUpper(S);
    printf("Converted to uppercase: %s\n",S);

    return 0;
}