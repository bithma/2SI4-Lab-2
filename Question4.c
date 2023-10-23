#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Questions.h"

void letter_freq(const char word[], int freq[]){

	int counter = 0;//variable assignment
	int i = 0;
	int k = 0;

	for(int j=0; j<26; j++){//loops to iterate through 26 letters

	    counter = 0 ;

	    for(i=0; word[i] != '\0'; i++ ){
	    	if( word[i]== (k+65) || word[i] == (k+97) ){ // check to see if certain letters matches letter in word
	    		counter = counter +1 ; // counter holds frequency of certain letter in word
	    }}
	        freq[k] = counter; // append frequency of letter to array

	        k++;
	}

   
}
