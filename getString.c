#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *get_string (char *prompt);

int main (void)
{
    char *name = get_string ("What's your name? ");
    printf("Hello, %s", name);
}

char *get_string (char *prompt)
{
    char s [32];
    printf("%s", prompt);
    fgets(s, sizeof(s), stdin);

    char *res = malloc(strlen(s) + 1); //memory allocate
    strcpy (res, s);
    return res;
}

