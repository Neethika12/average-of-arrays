#include<stdio.h>
int main(){
    int arr[50],n,i,sum = 0;
    printf("\nEnter the number of elements in the array:");
    scanf("%d", &n);

    for ( i = 0; i < n; i++)
    {
        printf("enter the element %d:", i+1);
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("\nThe sum of the array is :%d sum",sum);
    printf("\n the average of the array is : %.2f", (float)sum/n);

    
    return 0;
}