#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int get_int (const char *prompt);
char *get_string (const char *string);

int main (void)
{
    char *anw = get_string("What's your name? ");

    printf("hello, %s", anw);
}

int get_int (const char *prompt)
{
    char p [32];
    printf("%s", prompt);
    fgets(p, sizeof(p), stdin);
    return atoi(p);
}

char *get_string (const char *string)
{
    char buff [32];
    printf("%s", string);
    fgets (buff, sizeof(buff), stdin);

    char *result = malloc(strlen(buff));
    strcpy (result, buff);
    return result;
}