#include<stdio.h>

int main()
{ 
    int i=5;
    {
    int j=6;
    i+=9;//i=i+9
    }
    printf("%d",i);
    return 0;
}