#include <stdio.h>

int main() {
    int i=6;
    int *j=&i;
    int **ptr2=&j;
    printf("value of i is %d\n",*j);
     printf("value of i is %d\n",**ptr2);
    return 0;
}
