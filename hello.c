#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int randomnumber,userInput;
    randomnumber = rand() % 10;
    scanf("%d",&userInput);
    while (userInput != randomnumber)
    {
        if(userInput > randomnumber){
            printf("OOPS! You guessed too HIGh, guess somewhat LOW");
        }else if(userInput < randomnumber){
            printf("OOPS! You guessed too LOW, guess somewhat HIGh");
        }
    }

    printf("Hurray! You guessed right - %d",randomnumber);

    return 0;
    
    
    
}
