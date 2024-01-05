#include<stdio.h>
void main()
{
    int cp;
    printf("enter the cost price");
    scanf("%d",&cp);
    int sp;
    printf("enter the sell price");
    scanf("%d",&sp);


      if(cp<sp)
    {
        printf("profit has happened");
    }

      if(cp>sp)
    {
        printf("loss has happened");
    }

    return 0;

}
