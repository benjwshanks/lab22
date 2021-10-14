#include "lab22functs.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
//Aris wuz here


void displayWordList(char wordList[][MAX_WORD_LEN], int length){
   for(int i = 0; i < length; i++){
      printf("%03i : %s\n", i, wordList[i]);
   }
}

void displayBiGrams(int biGrams[][MAX_NUM_WORDS], int size){
    for(int r = 0; r < size; r++){
       for(int c = 0; c < size; c++){
           printf("%02i ", biGrams[r][c]);
       }
       printf("\n");
    }
}

FILE* openFile(char fName[], char fMode[]) {
   FILE* output = NULL;
   output = fopen(fName, fMode);
   return output;
}

bool getStringFromFile(FILE* inFile, char word[MAX_WORD_LEN]){
   char line[100];
   char *sp;
   while((fgets(line,100, inFile)!=NULL)){
        sp = strtok(line," ");
        strcpy(word,sp);
        return true;
   }
   

}

int addStringToList(char word[], char wordList[][MAX_WORD_LEN], int words) {
   int count = 0;
   for(int i = 0; i < len(wordList); ++i) {
      int comp1 = strcmp(word, wordList[i]); 
      if (comp1 == 0) {
         count++;
      }
   }
   strcpy(wordList[words], word);
}


