#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char q [5];
  int n;
  do
  {
    printf("Size: ");
    fgets(q, sizeof(q), stdin);
    n = atoi(q);
  }
  while (n<1);
  for (int i=0; i<n; i++)
  {
    for (int j=0; j<n; j++)
    {
        printf("#");
    }
    printf("\n");
  }
}