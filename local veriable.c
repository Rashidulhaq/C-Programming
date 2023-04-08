#include<stdio.h>

int main()
{ 
    int i=5;
    {
    int i=6;
    }
    printf("%d",i);
    return 0;
}