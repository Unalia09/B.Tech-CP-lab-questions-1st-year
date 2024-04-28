//program to find greatest among three numbers using if else construct

#include <stdio.h>

int main() {
    int n1=5, n2=40, n3=15;
    if(n1>n2 && n1>n3)
    printf("The greatest among %d, %d and %d is %d", n1,n2,n3,n1);
    else if(n2>n1 && n2>n3)
    printf("The greatest among %d, %d and %d is %d", n1,n2,n3,n2);
    else
    printf("The greatest among %d, %d and %d is %d", n1,n2,n3,n3);
    return 0;
}
