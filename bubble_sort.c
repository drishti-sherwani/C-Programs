#include <stdio.h>
void bubblesort(int arr[],int n){
    int i=0,temp,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main() {
     int arr[4] = {5, 3, 8, 1};
     int n=4;
    bubblesort(arr,n);
    for(int i = 0; i < n; i++){
    printf("%d ", arr[i]);
}
     
    
    return 0;
}