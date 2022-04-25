#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int randomNumber,userInput;
    randomNumber = rand() % 10;
    scanf("%d",&userInput);
    while (userInput != randomNumber)
    {
        if(userInput > randomNumber){
            printf("OOPS! You guessed too HIGh, guess somewhat LOW");
        }else if(userInput < randomNumber){
            printf("OOPS! You guessed too LOW, guess somewhat HIGh");
        }
    }

    printf("Hurray! You guessed right - %d",randomNumber);

    return 0;   
}
