#include <stdio.h>

/* Function to find length of string (no built-in functions) */
int length(char s[])
{
    int i = 0;
    while (s[i] != '\0')
        i++;
    return i;
}

/* Pattern matching function */
int match(char text[], char pattern[])
{
    int c,d,e,pos = -1;
    int text_len = length(text);
    int pat_len = length(pattern);

    if (pat_len > text_len)
        return -1;

    for (c = 0; c <= text_len - pat_len; c++)
    {
        pos = e = c;
        for (d = 0; d < pat_len; d++)
        {
            if (text[e] == pattern[d]){
                e++;
            }
            else{
            break;
        }
    }
    if (d == pat_len){
        return pos;   
    }
     
       // pattern found
    }
    
      return -1;       

            // pattern not found
}

int main()
{
    char text[100], pattern[50];
    int pos;

    printf("Enter the main string: ");
    gets(text);

    printf("Enter the pattern string: ");
    gets(pattern);

    pos = match(text, pattern);

    if (pos != -1)
        printf("Pattern starts at position %d\n", pos);
    else
        printf("Pattern not found\n");

    return 0;
}
