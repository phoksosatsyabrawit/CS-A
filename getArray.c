#include <stdio.h>
#include <stdlib.h>

int get_int (char *prompt);
float average (int arr []);
const int n = 3;

int main (void)
{
    int scores [n];
    for (int i=0; i < n; i++)
    {
        scores [i] = get_int("Score: ");
    }
    printf("Average: %.2f \n", average(scores));
}

int get_int (char *prompt)
{
    int x;
    char s [32];
    printf("%s", prompt);
    fgets(s, sizeof(s), stdin);
    x = atoi(s);
    return x;
}

float average (int arr [])
{
    int sum = 0;
    // #dynamic loop
    // go through loop and keep adding to sum which is intially zero whatever is in Array bracket i
    for (int i=0; i < n; i++)
    {
        sum += arr [i]; //recap for adding thing syntax
    }
    return sum / (float) n; 
    // manual hardcode
    /* return (arr [0] + arr [1] + arr [2] )/ (float) n; */
}