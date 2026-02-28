#include <stdio.h>

int main() {
    char ch ='h';
    printf("enter the value of character\n");
    scanf("%c",&ch);
    printf("the value of character is %d\n",ch);
    if( ch >=97 && ch <=122){ 
        printf("the character is in lower case ");
    }
    else{
        printf("the character is not in lower case");
    }
    return 0;
}