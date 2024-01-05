#include<stdio.h>
int main()
{
    int month;
    printf("enter the month you born in \n");
    scanf("%d",&month);

    switch (month)
    {


     case 1:
        printf("you born in jan");
        break;


     case 2:
        printf("you born in feb");
        break;


     case 3:
        printf("you born in march");
        break;


     case 4:
        printf("you born in april");
        break;


     case 5:
        printf("you born in may");
        break;


     case 6:
        printf("you born in june");
        break;


     case 7:
        printf("you born in july");
        break;


     case 8:
        printf("you born in august");
        break;



     case 9:
        printf("you born in september");
        break;


     case 10:
        printf("you born in  oct");
        break;


     case 11:
        printf("you born in november");
        break;


     case 12:
        printf("you born in dec");
        break;

    default:
        printf("you are born in ________");




    }


    return 0;
}
