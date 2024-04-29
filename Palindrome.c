// program to find the Palindrome of a number


#include <stdio.h>

int main() {
    int n, s=0, r, c;

    printf("Enter the numbers: ");
    scanf("%d", &n);
    c=n;

    while(n>0){
        r=n%10;
        s=r+(s*10);
        n=n/10;
        
    }
    if(c==s)
    printf("It is a palindrome");
    else
    printf("Not a palindrome");


    return 0;
}
