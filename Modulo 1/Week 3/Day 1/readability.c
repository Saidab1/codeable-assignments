#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <string.h>
#include <ctype.h>



int main (void) {

    string text = get_string("Text: ");

    int counter_letters = 0;
    int counter_words = 0;
     int count_sentences = 0;

    for (int i = 0; i < strlen (text); i++) {
        if (isspace(text[i])) {
            counter_words+=1;
        } else if (i == strlen(text) -1) {
            if (ispunct(text[i])) {
                counter_words+=1;
            }
        } else if (isalpha(text[i])) {
            counter_letters+=1;
        }

        if (text[i]== '.' || text[i] == '!' || text[i] == '?') {
            count_sentences +=1;

        }
    }



    float L = ( (float) counter_letters /  counter_words ) * 100;

    float S = ((float)count_sentences / counter_words) * 100;

    int index = round ((0.0588 * L) - (0.296 * S) - 15.8);

    if (index >= 16) {
        printf ("Grade 16+\n");
    } else if (index < 1) {
        printf("Before Grade 1\n");
    } else {

    printf("Grade %i\n", index);
    }


}



