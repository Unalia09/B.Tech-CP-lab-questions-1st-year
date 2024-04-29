#include<stdio.h>
int add_num(int,int);
int main(){
    int a,b,sum;
    printf("Enter two numbers a and b");
    scanf("%d %d", &a, &b);
    sum=add_num(a,b);
    printf("Sum is %d ", sum);
    
}
int add_num(int a, int b){
    int sum;
    sum=a+b;
    return sum;
}
