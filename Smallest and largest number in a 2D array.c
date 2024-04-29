
 
#include <stdio.h>

int main()
{
    int Arr[3][3],n, i,j, small, large;

    for (i = 0; i <3; i++)
    {
        for(j = 0; j < 3; j++){
        printf("Enter element %d : ", i + 1);
        scanf("%d", &Arr[i][j]);
        }
        
    }
    small=Arr[0][0];
    large=Arr[0][0];
    for (i=0;i<3;i++){
        for(j = 0; j < 3; j++){
        if (Arr[i][j]<small){
            small=Arr[i][j];
        
        }
        if (Arr[i][j]>large){
            large=Arr[i][j];
        }
        }
    }
    printf("\nLargest element : %d", large);
    printf("\nSmallest element : %d", small);

    return 0;
