#include <stdio.h>
#include <stdlib.h>

int get_int (const char *prompt);
char get_string (const char *string);

int main (void)
{
    char anw = get_string("What's your name: ");
    printf("%s\n", anw);
}

int get_int (const char *prompt)
{
    char p [32];
    printf("%s", prompt);
    fgets(p, sizeof(p), stdin);
    return atoi(p);
}

char get_string (const char *string)
{
    char s [32];
    printf("%s", string);
    fgets(s, sizeof(s), stdin);
    return strtof(string);
}