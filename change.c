#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int x;

    printf("Hello. How much change is owed? Enter as a whole number Example: 0.41 as 41\n");
    scanf("%d", &x);

    printf("Quarters: %d\n", x/25);
    x = x % 25;
    printf("Dimes: %d\n", x/10);
    x = x % 10;
    printf("Nickels: %d\n", x/5);
    x = x % 5;
    printf("Pennies: %d\n", x);
 

    printf("Would you like to make change for another amount? Enter 1 for yes and 0 for no\n");
    scanf("%d", &x);
    if(x == 1){
        main();
    }
    else{
        printf("Goodbye\n");
    }
    return 0;
}