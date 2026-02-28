#include <stdio.h>

int main() {
    int n,i,prime;
    printf("enter the no to check prime or not: ");
    scanf("%d",&n);
    for (i=2;i<n;i++)
    {
        if(n%i==0){
            prime=1;
        break;

        }
    }
    if(prime==1){
        printf("%d is not prime",n);
    }
    else{
        printf("%d is prime",n);
    }
    
    return 0;
}
