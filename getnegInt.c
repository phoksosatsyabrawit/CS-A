#include <stdio.h>
#include <stdlib.h>

int get_negInt (char *prompt);

int main (void)
{
    int neg = get_negInt("Negative Interger: ");
    printf("%i \n", neg);
}

int get_negInt (char *prompt)
{
    int x;
    char n [32];

    do
    { 
       printf("%s", prompt);
       fgets(n, sizeof(n), stdin);
       x = atoi(n);
    }
    while (x < 0);
    
    return x;
}

