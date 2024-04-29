// program to calculate sum of series given below: 1^2+2^2....N^2


#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum= sum+(i*i);
    }

    printf("The sum of the square of the first %d natural numbers is %d\n", n, sum);

    return 0;
}
