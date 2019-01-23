#include<stdio.h>
#include<stdlib.h> 
#include<time.h>

void fillArray (int *, int, int, int);
void printArray (int *, int, int);
int getMin (int *, int);
int getMax (int *, int);
void buildNewArray (int *, int, int, int);

 
 
int main ()
{
  
int array[53];

int anzArrayElemente = 53;
int unterGrenze = 300, oberGrenze = 500;
int min, max;
int anzSpalten = 12;
int anz = 0;

fillArray(array,0,unterGrenze,oberGrenze);
printArray(array,0,anzSpalten);
min = getMin(array,anz);
max = getMax(array,anz);
buildNewArray(array,anz,min,max);

return 0;
}


 
int getMin (int *x, int anz)
{
    anz = x[0];
    for(int i;i<53;i++)
    {
        if(anz>x[i])
        {
            anz = x[i];
        }
    }
  
    return anz;
} 
 
int getMax (int *x, int anz)
{
        anz = x[0];
    for(int i;i<53;i++)
    {
        if(anz<x[i])
        {
            anz = x[i];
        }
    }
  
    return anz;
} 
 
void fillArray (int *x, int anz, int uG, int oG)
{
    srand(time(0));
    for(int i = 0;i<53;i++)
    {
     x[i] = rand() % 200 + 300;   
    }
    
} 
 
void printArray (int *x, int anz, int anzSpalten)
{
int i = 0;
printf("\nArray original:");
for(i = 0;i<53;i++)
{
    
    if(i % 12 == 0)
    {
        printf("\n");
    }
    printf("%d ",x[i]);
    if(i==52)
    {
        printf("\n");
    }
} 
}
void buildNewArray (int *x, int anz, int min, int max)
{
    printf("\nArray umgeschalten:");
    for(int i = 0;i<53;i++)
    {
        
        if(i % 2 == 0)
        {
            x[i] = min;
        }
        else
        {
            x[i] = max;
        }
    }
    for(int i = 0;i<53;i++)
    {
        if(i % 12 ==0)
        {
            printf("\n");
        }
        anz = x[i];
        printf("%d ",anz);
    }
} 
