#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char q [5];
  int n;
  printf("Size: ");
  fgets(q, sizeof(q), stdin);
  n = atoi(q);
  for (int i=0; i<n; i++)
  {
    for (int j=0; j<n; j++)
    {
        printf("#");
    }
    printf("\n");
  }
}