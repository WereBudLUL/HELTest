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

void arithmetical_mean(int * array33)
{
    int median = 0;
    for(int i = 0;i<25;i++)
    {
        median+=array33[i];
    }
    median /= 25;
    printf("\n\nMedian: %d\n\nAlle Abweichungen von +-20\%% mit Median ausgetauscht: \n",median);
    
    for(int i = 0;i<25;i++)
    {
        if(array33[i] < median * 0.80 || array33[i] > median * 1.20)
        {
            array33[i] = median;
        }
        printf("%d ",array33[i]);
    }
}

void min_max(int * array44)
{
    int min = array44[0];
    int max = array44[0];
    
    for(int i = 0;i<25;i++)
    {
        if(min > array44[i])
        {
            min = array44[i];
        }
        if(max < array44[i])
        {
            max = array44[i];
        }
    }
    printf("\n\nMin: %d\n",min);
    printf("\nMax: %d",max);
}

void count_12(int * array55)
{
    int one = 0;
    int two = 0;
    int three = 0;
    for(int i = 0;i<25;i++)
    {
        if(array55[i]<10)
        {
            one++;
        }
        if(array55[i]>=10 && array55[i] < 100)
        {
            two++;
        }
        if(array55[i] == 100)
        {
            three++;
        }
    }
    printf("\n\nEinstellig: %d \n\nZweistellig: %d \n\nDreistellig: %d",one,two,three);
}

int main ()
{


  int array[25];
  int array2[25];
  int array3[25];


  randnum (array);
  printf ("\n");


  for (int g = 0; g < 25; g++)
    {
      array2[g] = array[g];
    }

  reverse (array2);
  
   for (int g = 0; g < 25; g++)
    {
      array3[g] = array[g];
    }
  
  arithmetical_mean(array3);
  min_max(array);
  count_12(array);
  
  
  return 0;
}
