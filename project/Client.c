#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <limits.h>
#include "Maps.h"
#include "Conversion.h"
#include "Translator.h"
#define MAX 9999

int main(){
    //These are two file pointers morsefile stores the morse code to be converted to english
    //englishfile stores the english words to be converted to morse
    //Just make sure the following things
    //In the english file:
    //1)ALL WORDS SHOULD BE CAPITALIZED
    //2)DO NOT USE ANY SPECIAL CHARECTERS, THE ONLY SPECIAL CHARECTER ALLOWED IS " "
    //3)MAKE SURE U END WITH A SPACE
    //In the morse file:
    //1)THE ENTIRE FILE SHOULD CONSIST OF ONLY ".", "-", " ", "/"
    //2)WHILE TYPING THE A WORD AFTER EACH MORSE WORD LEAVE A SPACE
    //3)WHEN YOU START A NEW WORD USE " / "
    //4)END WITH A SPACE

    FILE *morsefile , *englishfile;
    struct node* mITU = newNode(' ');
    ht_t *eITU = ht_create();
    create_mITU(mITU);
    create_eITU(eITU);
    int ch = 1 , ch1;
    if (ch==1) {
        printf("1.Convert to morse.\n2.Convert to english\nEnter your choice: ");
        scanf("%d" , &ch1);
        if (ch1 == 1) {
            englishfile = fopen("english.txt" , "r");
            char to_morse[MAX];
            while (fgets(to_morse , sizeof(to_morse) , englishfile) != NULL) {
                 english_to_morse(eITU , to_morse);
                 printf("\n");
            }
        }
        else if (ch1 == 2) {
            morsefile = fopen("morse.txt" , "r");
            char to_eng[MAX];
            while (fgets(to_eng , sizeof(to_eng) , morsefile) != NULL) {
                 morse_to_english(mITU , to_eng);
                 printf("\n");
        }
        }

    }
    
    return 0;
}
