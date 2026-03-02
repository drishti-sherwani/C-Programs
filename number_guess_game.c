#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int random;
    int guessed,no_ofguess=0;

    srand(time(0));   // Seed

    random = (rand() % 100) + 1;

   do
   {
   printf(" Guess the number: ");
   scanf("%d",&guessed);
   if (guessed<random)
   {
   printf("higher number please!\n");
   }
   else if(guessed>random)
   {
     printf("lower number please!\n");
   }
   no_ofguess++;
   }
    while (guessed!=random);
    printf("CONGRATULATIONS!! the number was: %d\n",random);
    printf("your total number of guesses are: %d\n ",no_ofguess);
   

    return 0;
}