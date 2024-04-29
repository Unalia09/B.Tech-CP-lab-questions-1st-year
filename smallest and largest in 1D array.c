#include <stdio.h>

int main()
{
    int Arr[100], n, i, small, large;

    printf("Enter the number of elements you want to insert : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &Arr[i]);
        
    }
    small=Arr[0];
    large=Arr[0];
    for (i=1;i<n;i++){
        if (Arr[i]<small){
            small=Arr[i];
        
        }
        if (Arr[i]>large){
            large=Arr[i];
        }
    }
    printf("\nLargest element : %d", large);
    printf("\nSmallest element : %d", small);

    return 0;
}
