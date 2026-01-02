#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char s [5];
    int x,y;
    printf("x: ");
    fgets(s, sizeof(s), stdin);
    x = atoi(s);
    printf("y: ");
    fgets(s, sizeof(s), stdin);
    y = atoi(s);
    printf("%i\n", x+y);
}
