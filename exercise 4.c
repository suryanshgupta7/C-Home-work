/* Exercise of Units and Conversions
kms to miles
inches to foot
cms to inches
pound to kgs
inches to meters*/

#include<stdio.h>
int main()
{
int kms,inches,cms,pound,foot,kgs,meters,option;
printf(" which conversion you want to choose:\n");
printf("1.kms to miles\n");
printf("2.inches to foot\n");
printf("3.cms to inches\n");
printf("4.pound to kgs\n");
printf("5.inches to meters\n");
scanf("%d",&option);

switch (option)
{
    case 1:
           printf("enter the unit in kms\n");
           scanf("%d",&kms);
           printf("%d kms in miles is %f miles",kms,kms*0.621371);
           break;
    case 2:
           printf("enter the unit in inches\n");
           scanf("%d",&inches);
           printf("%d inches in foot is %f foot",inches,inches*0.0833333);
           break;
     case 3:
           printf("enter the unit in cms\n");
           scanf("%d",&cms);
           printf("%d cms in inches is %f inches",cms,cms* 0.3943);
           break;
     case 4:
           printf("enter the unit in pound \n");
           scanf("%d",&pound);
           printf("%d pound  in kgs is %f kgs", pound, pound*0.454);
           break;
     case 5:
           printf("enter the unit in inches\n");
           scanf("%d",&inches);
           printf("%d inches in meters is %f meters",inches,inches*0.0254);
           break;

}
return 0;

}
