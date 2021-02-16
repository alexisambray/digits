// Ask user what place he/she wants to change, AND ask what number he/she wants it to be
// Digits 0 - 9
#include <stdio.h>
#include <math.h>

int number[9] = {0, 1, 2, 4, 5, 6, 7, 8};

int getDigit(int input, int digitPlace) {
    int divisor;
    divisor = (int) pow(10, digitPlace - 1);
    return input / divisor % 10;
}

int changeDigit(int input, int digitPlace, int newDigit) {
    int oldDigit, divisor;
    divisor = (int) pow(10, 9 - digitPlace);
    oldDigit = input / divisor % 10;
    return input - oldDigit * divisor + newDigit * divisor;
}

int main() {
    int input;
    int number[9] = {0, 1, 2, 4, 5, 6, 7, 8};
    int changePlace, newDigit;
    
    printf("Enter a number with nine digits : ");
    scanf("%d", &input);
    
    number[0] = getDigit(input,1);
    number[1] = getDigit(input,2);
    number[2] = getDigit(input,3);
    number[3] = getDigit(input,4);
    number[4] = getDigit(input,5);
    number[5] = getDigit(input,6);
    number[6] = getDigit(input,7);
    number[7] = getDigit(input,8);
    number[8] = getDigit(input,9);
    
    printf("%d%d%d, %d%d%d, %d%d%d", number[8], number[7], number[6], number[5], number[4], number[3], number[2], number[1], number[0]);
    printf("\nEnter which place you would like to change [1..9] : ");
    scanf("%d", &changePlace);
    
    printf("Enter what digit you would like to change it to : ");
    scanf("%d", &newDigit);
    input = changeDigit(input,changePlace,newDigit);
    printf("\nThe new number is : %d\n",input);
}
