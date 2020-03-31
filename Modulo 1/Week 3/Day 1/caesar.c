#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>




int main (int argc, string argv[])
{


    if (argc != 2) {
        printf("./caesar key \n");
        return 1;

    }


    for (int i = 0; i <strlen(argv[1]); i++ ) {
        if (!isdigit(argv[1][i])) {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

     int key = atoi (argv[1]);


     string ptext = get_string ("plaintext: ");

     char c;

     for (int i = 0; i <strlen(ptext); i++) {
         if( isalpha(ptext[i]) ){
             if (isupper(ptext[i])) {
             c = ((ptext[i] -65) + key) % 26;
             ptext[i] = c + 65;
            } else if (islower(ptext[i])) {
             c = ((ptext[i] -97) + key) % 26;
             ptext[i] = c + 97;
         }
     }
     }

     printf("ciphertext: %s\n", ptext);



}

