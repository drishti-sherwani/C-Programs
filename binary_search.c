#include <stdio.h>
int binarysearch(int arr[],int size,int key){
     int low = 0, high = size - 1, mid;
     while(low <= high) {

        mid = (low + high) / 2;

        if(arr[mid] == key) {
          return mid;
        }
        else if(arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {

    int arr[] = {11,12,23,56,67,78,78,89,90};   // sorted array
    int size = 9;
    int key = 78;
    int result =binarysearch(arr,size,key);
     if(result != -1)
        printf("Element found at index %d", result);
    else
        printf("Element not found");

    return 0;
}


   
   

   

   