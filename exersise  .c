# include <stdio.h>
/*
Print multiplication table of a number entered by the user in pretty form

Example:

Input
Enter the number you want multiplication table of:
6

Output:
Table of 6:
6 X 1 = 6
6 X 2 = 12
6 X 3 = 18
6 X 4 = 24
6 X 5 = 30
6 X 6 = 36
6 X 7 = 42
6 X 8 = 48
6 X 9 = 54
6 X 10 =60

*/
int main()
{
   int a;
   printf("enter the number you want multiplication table of:\n ");
   scanf("%d\n",&a);

   printf("multiplication table of %d is as follows:\n",a);

   printf("a*1=%d\n",a*1 );
   printf("a*2=%d\n",a*2 );
   printf("a*3=%d\n",a*3 );
   printf("a*4=%d\n",a*4 );
   printf("a*5=%d\n",a*5 );
   printf("a*6=%d\n",a*6 );
   printf("a*7=%d\n",a*7 );
   printf("a*8=%d\n",a*8 );
   printf("a*9=%d\n",a*9 );



   return 0;
}

