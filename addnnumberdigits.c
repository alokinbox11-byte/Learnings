#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    printf("Enter the value how many time add : ");
    scanf("%d",&n);

    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        return 1;
    }
    

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    
    printf("The sum of these values is : %d",sum);
    
    return 0;
}
