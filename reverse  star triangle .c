#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n = ");
    scanf("%d",&n);


    //for(int i=0;i<=n;i++)
    for(int i=1;i<=n;i++)
    {
      //for(int j=1;j<=n-i;j++)
      for(int j=1;j<=n+1-i;j++)

      {
        printf(" * ");
      }
        printf("\n");
    }
    return 0;
}

