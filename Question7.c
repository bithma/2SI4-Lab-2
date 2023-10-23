#include <stdio.h>
#include <stdlib.h>
#include "Questions.h"


void addEff(int val1[], int val2[], int val3[], int pos1[], int pos2[], int pos3[], int k1, int k2){


    int a = 0; // initalize variables
	int b = 0;
    int i = 0;
    int greater = 0;
	int k = 0;

if(pos1[k1-1]>= pos2[k2-1]){ // sets highest value of pos1 and pos 2 to greater
	greater = pos1[k1-1];
}
else{
	greater = pos2[k2-1];
}

for(i=0; i<=(k1+k2); i++){ // loops through total spaces of val3
	if((pos1[a] == pos2[b]) && (pos1[a] == (i+1)) ){ // adds values of val1 and val2 if they have the same value for pos
		val3[k] = (val1[a] + val2[b]);
		pos3[k] = pos1[a];
		a++;
		b++;
		k++;
	}
	else{
		if(pos1[a]> pos2[b] && pos2[b] == (i+1)){ //appends values of second array to val3/pos3 if value not found in array 1
		val3[k] = val2[b];
		pos3[k] = pos2[b];
		b++;
		k++;
	}
	else {
		if(pos1[a]< pos2[b] && pos1[a] == (i+1)){//appends values of first array to val3/pos3 if value not found in array 2
		val3[k] = val1[a];
		pos3[k] = pos1[a];
		a++;
		k++;
	}


else{ //adds 0 to end of array if needed
	if (i>greater){
		val3[i] = 0;
	}
}

}
	}

}
}
