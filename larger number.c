#include<stdio.h>

int main()
{   
    int a,b;
    printf("Enter tow number\n");
    scanf("%d %d",&a,&b);
    if(a>b){printf("the larger number is %d",a);}
    else {printf("the larger number is %d",b);}
    return 0;
}