#include<stdio.h>
int main()
{
    int ram ,shyam,ajay;
    printf("enter the age of  ram = ");
    scanf("%d",&ram);
    printf("enter the age of  shyam = ");
    scanf("%d",&shyam);
    printf("enter the age of  ajay = ");
    scanf("%d",&ajay);

    if(ram<shyam && ram<ajay)
        printf("ram is youngest");

    if(shyam<ram && shyam<ajay)
        printf("shayam is youngest");

    else
        printf("ajay is youngest");
}
