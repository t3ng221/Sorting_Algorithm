#include <stdio.h>

int main()
{
  int array[100], n, i, j, min, swap;

  scanf("%d", &n);

  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);

  for (i = 0; i < (n - 1); i++)
  {
    min = i;

    for (j = i + 1; j < n; j++)
    {
      if (array[min] > array[j])
        min = j;
    }

      swap = array[i];
      array[i] = array[min];
      array[min] = swap;

  }

  for (i = 0; i < n; i++)
    printf("%d  ", array[i]);

  return 0;
}
