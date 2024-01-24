#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    ((num & 1 )==1)? printf("number = %d is odd",num): printf("the number = %d is even ",num);
   return 0;

}