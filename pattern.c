#include <stdio.h>
void pattern(int n );
// outer loop =lines 
// inner loop = stars 
// for i=0----1 line ---- 2*0+1=1
// for i=1----2 line ---- 2*1+1=3
// for i=2----3 line ---- 2*2+1=5
void pattern(int n ){
    for (int i=0;i<=n;i++){
        for (int j=0;j<2*i+1;j++){
            printf("*");
        }
        printf("\n");
    }  
}
int main() {
    pattern(4
    );
    
    return 0;
}
