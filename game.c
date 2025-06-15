//Snack , Water and Gun Game.
//Play and get fun.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int snackwatergun(char you, char comp)
{
    // return 1 if you win,-1if you loss,0 if draw
    // draw conditions
    if (you == comp)  {
        return 0;
    }
    // non-draw conditions
    if (you == 's' && comp == 'g') {
        return -1;
    }
    else if (you == 's' && comp == 'w'){
        return 1;
    }
    else if (you == 'g' && comp == 's')  {
        return 1;
    }
    else if (you == 'w' && comp == 's') {
        return -1;
    }
    else if (you == 'g' && comp == 'w') {
        return -1;
    }
    else if (you == 'w' && comp == 'g')  {
        return 1;
    }
    return 0;
}
int main(){
    char you, comp;
    // do generate random number between 1 to 100.
    srand(time(0));
    int number = rand() % 100 + 1;
    if (number < 33){
        comp = 's';
    }
    else if (number > 33 && number < 66) {
        comp = 'w';
    }
    else {
        comp = 'g';
    }
    printf("Enter 's' for snack,enter 'w' for water,enter 'g' for gun : ");
    scanf("%c", &you);
    int result = snackwatergun(you, comp);
    printf("\nYou choose %c and computer choose %c.", you, comp);
    if (result == 0) {
        printf("\nGame draw\n");
    }
    else if (result == 1) {
        printf("\nYou win\n");
    }
    else  {
        printf("\nYou loss\n");
    }
    return 0;
}