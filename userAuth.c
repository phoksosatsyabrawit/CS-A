#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *get_string (char *prompt);

int main (void)
{
    char *user = get_string("User: ");
    char  *pass = get_string("Password: ");
    printf("%s", user);
    printf("%s", pass);
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
