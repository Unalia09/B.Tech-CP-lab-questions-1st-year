// program to calculate sum of series given below: 11+22+33+...+NN


#include <stdio.h>

int main() {
    int n, sum = 0, factor=11;

    printf("Enter the limit: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum= sum+(i*factor);
    }

    printf("The sum of the series is: %d", sum);

    return 0;
}
