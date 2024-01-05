#include<stdio.h>
void triangulartarPattern(int n)
{
     for(int i=1;i<=n;i++)
     {
         for(int j=1;j<=i;j++)
         {
             printf(" *");
         }
         printf("\n");
     }
}

void reversetriangularstarpattern(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
}



int main()
{
int n;
printf("enter the no of rows");
scanf("%d",&n);

int ch;
printf("choose what you want");
scanf("%d",&ch);

switch(ch)
{
case 0:
    triangulartarPattern(n);
    break;

case 1:
    reversetriangularstarpattern(n);
    break;

default:
   printf("you have entered wrng choice");
   break;
}

return 0;

}


