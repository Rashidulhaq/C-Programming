#include<stdio.h>

void main()
{
    float cent,farn;
    printf("Enter centigrade:");
    scanf("%f",&cent);
    farn=1.8 * cent + 32;
    printf("Farhrenheit equation is: %.2f",farn);

    return 0;
}