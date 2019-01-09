#include <stdio.h>

int main()
{
    
    int input[100] = {0};
    int i = 0;
    printf("Bitte geben Sie Zahlen ein (max 100):");
    
    while(1)
    {
 
    scanf("%d",&input[i]);
    i++;
    for(int j=0;j<100;j++)
    {
        printf("%d",input[j]);
    }
    }
    
    
    return 0;
}
