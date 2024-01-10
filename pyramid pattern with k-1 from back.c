#include<stdio.h>
int main()
{
    int space,rows,s,k,i,j;
    printf("Enter the no of rows :");
    scanf("%d",&rows);
    space=rows;
    for(i=0;i<=rows;i++)
    {
        for(s=1;s<=space;s++)
        {
            printf(" ");
        }
    for(j=1;j<=i;j++)
    {
        printf("%d",j);
    }
    for(k=i-1;k>=1;k--)
    {
        printf("%d",k);
    }
    printf("\n");
    space--;
    }
  return 0;
}