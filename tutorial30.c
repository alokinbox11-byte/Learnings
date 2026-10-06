#include <stdio.h>

void starPattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}

void reversestarpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j  = 0; j <= rows-i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
    
int main()
{
    int rows,type;
    printf("Enter 0 for Triangular Star Pattern and 1 for Reverse Triangular Star Pattern : ");
    scanf("%d",&type);
    printf("How many rows do you want? ");
    scanf("%d",&rows);
    switch (type)
    {
    case 0:
            starPattern(rows);
        break;

    case 1:
            reversestarpattern(rows);
        break;
    
    default:

    printf("You have entered invaild choice");
        break;
    }
    
    return 0;
}