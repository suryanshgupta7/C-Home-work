#include<stdio.h>
int main()
{

/*
int a=34;
int* ptra=&a;
printf("%d\n",ptra);
printf("%d\n",ptra+1);
*/

/*
char a= '3';
char* ptra=&a;
printf("%d\n",ptra);
printf("%d\n",ptra+1);
*/

int arr[]={1,2,3,4,5,6,7,8,9,10};
printf("the value of address of first element of the array is %d\n",arr[0]);
printf("the value of address of first element of the array is %d\n",*(&arr[0]));
printf("the value of address of first element of the array is %d\n",*(arr));
printf("the value of address of second element of the array is %d\n",arr[1]);
printf("the value of address of second element of the array is %d\n",*(&arr[1]));
printf("the value of address of second element of the array is %d\n",*(arr+1));


printf("the  address of first element of the array is %d\n",&arr[0]);
printf("the  address of first element of the array is %d\n",arr);





return 0;

}
