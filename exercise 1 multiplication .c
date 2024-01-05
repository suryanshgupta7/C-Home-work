#include<stdio.h>
int main()

{
    int num;
    printf("enter the number you want multiplication table  of:\n");
    scanf("%d\n",&num);

    printf("the multiplication table of %d is as follow:\n");

    for (int i=1; i<11; i++)
        printf("%d X %d = %d\n",num,i,num*i );


    return 0;



}
