# include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void) {
    float dollar; 
    do {
        dollar = get_float ("Change owed : ");
    }
    while (dollar <0);

    int coins = round(dollar * 100);
    int counter = 0;

    while (coins >=1) {
        if (coins >= 25) {
            coins = coins - 25;
            counter++;
        } else if (coins < 25 && coins >= 10) {
            coins = coins - 10;
            counter++;
        } else if (coins < 10 && coins >= 5) {
            coins = coins - 5;
            counter++;
        } else {
            coins = coins - 1;
            counter++;
    
        }
    }
    printf ("%i\n",counter);
}
