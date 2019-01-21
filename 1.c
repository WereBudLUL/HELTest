#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void randnum (int *array11)
{
  srand (time (0));

  for (int i = 0; i < 25; i++)
    {

      array11[i] = rand () % 100;
    }

  for (int f = 0; f < 25; f++)
    {
      printf ("%d ", array11[f]);
    }
}


void reverse (int *array22)
{
  int cache = 0;

  int j = 0;

  for (int h = 24; h >= 12; h-- && j++)
    {
      cache = array22[h];
      array22[h] = array22[j];
      array22[j] = cache;

    }
  printf ("\nZahlen umgedreht:\n");
  for (int u = 0; u < 25; u++)
    {
      printf ("%d ", array22[u]);
    }
}

int main ()
{


  int array[25];
  int array2[25];


  randnum (array);
  printf ("\n");


  for (int g = 0; g < 25; g++)
    {
      array2[g] = array[g];
    }

  reverse (array2);


  return 0;
}
