#include <stdio.h>

int main() {
    int i,n,product=1;
    printf("enter value of n: ");
    scanf("%d",&n);
    for ( i=1;i<=n;i++)
    {
        product*=i;
       
      
    }
    printf("the factorial of n is %d",product);
    
    return 0;
}
