#include <stdio.h>
#include <stdlib.h>

int get_int (const char *prompt);

int main (void)
{
    int anw = get_int("What's your name: ");
    printf("%s\n", anw);
}

int get_int (const char *prompt)
{
    char p [32];
    printf("%s", prompt);
    fgets(p, sizeof(p), stdin);
    return atoi(p);
}