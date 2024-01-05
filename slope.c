#include<stdio.h>
int main()
{
    int x1,x2,x3,y1,y2,y3;
    printf("enter the value of x1 = ");
    scanf("%d",&x1);
    printf("enter the value of x2 = ");
    scanf("%d",&x2);
    printf("enter the value of x3 = ");
    scanf("%d",&x3);
    printf("enter the value of y1 = ");
    scanf("%d",&y1);
    printf("enter the value of y2 = ");
    scanf("%d",&y2);
    printf("enter the value of y3 = ");
    scanf("%d",&y3);

    int m1,m2;
    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);
    printf("the slope is %d and %d \n",m1,m2);

    if(m1==m2)
        printf("the points lie on straight line");
    else
        printf("the points does not lie on straight line");
}
