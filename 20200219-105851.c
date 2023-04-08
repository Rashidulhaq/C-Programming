#include<stdio.h>

int main()
{
    int Year;
    printf("Enter Year\n");
    scanf("%d",&Year);
    if("the year %4==0 && year %100!=0")
    {
        printf("Leap Year");
    }
     else if ("the year %400==0")
    {
        printf("Leap Year");
    }
    else {
        printf("Not Leap Year");
    }

    return 0;
}