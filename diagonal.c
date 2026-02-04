#include <stdio.h>
void main()
{
    int rows,columns;
    printf("enter number of rows and columns");
    scanf("%d%d",&rows,&columns);
    for(int i=1;i<=rows;i++)
    {
        for( int j=1;j<=columns;j++)
        {
            if(i==1||i==rows||j==1||j==columns||i==j)
            {
                printf("* ");
                
            }
            else
            {
                printf("  ");
                
            }
        }
      printf("\n");  
    }

    
}