#include <stdio.h>
#include <stdlib.h>
#include "Questions.h"


void efficient(const int source[], int val[], int pos[], int size){

	int i;
	int k = 0;
	for (i=0; i<size; i++){ //iterates till reaches size of array
		if(source[i] != 0){ // makes sure value of source is not 0
			val[k] = source[i];
			pos[k] = i; // takes placement of source into pos
			k++;
		}
	}

}

void reconstruct(int source[], int m, const int val[], const int pos[], int n){

    int i;
    int k = 0;
    for(i=0; i<m; i++){ //iterates through i
    	if(i==pos[k]){ // will assign source index if i matches with pos value
    		source[i] = val[k];
    		k++;
    	}
    	else{
    		source[i] = 0;
    	}
    }
	

}
