#include<stdio.h>
#include<limits.h>

int main(){

    int arr[7] = {9,8,7,6,5,4,3};
    int n = 7;

    for(int i=0; i<n-1; i++){
        int min = INT_MAX;
        int min_idx = -1;
        for(int j=i; j<=n-1; j++){
            if(min>arr[j]){
                min = arr[j];
                min_idx = j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
    printf("The sorted array is : ");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}