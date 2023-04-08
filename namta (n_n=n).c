#include<stdio.h>

int main()
{
while(1){
    int num,res;
    printf("Enter any number");
    scanf("%d",&num);
    for(int i=1;i<=10 ;i++){
    res=num*i;
    
    printf("%d x %d= %d\n", num,i,res);
    }}
   
    return 0;
}