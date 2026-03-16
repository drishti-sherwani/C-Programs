#include <stdio.h>
int sum(int *ptr,int *ptr1 );
int sum(int *ptr,int *ptr1 ){
   
    return *ptr + *ptr1;


}
float avg(int *ptr,int *ptr1 );
float avg(int *ptr,int *ptr1 ){
    return (*ptr + *ptr1)/2.0;
}

int main() {
    int a=6,b=10;
    float x=2.0,y=5.5;
          printf("Sum = %d\n", sum(&a,&b));

    printf("Average = %.2f", avg(&a,&b));
    return 0;
}