#include <stdio.h>
#include <stdlib.h>

int get_int(const char *prompt);

int main(void)
{
    long x = get_int("x: ");
    long y = get_int("y: ");

    float z = (double) x / (double) y;
    
    printf("%.20f \n", z);
}

int get_int(const char *prompt)
{
    char s [64];
    printf("%s", prompt);
    fgets (s, sizeof(s), stdin);
    return atoi(s);
}