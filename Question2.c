#include <stdio.h>
#include <stdlib.h>

#include "Questions.h"
#include "math.h"


int is_diag_dom(int mat[][N2]){

    //this is the flag that is returned to tell whether the mat is diagonally
	int isDiag=0;
	
	//write your code below
	//Return 1 if the matrix is diagonally dominant and 0 otherwise
	int i = 0; // initialize variables
	int j = 0;
	int count = 0;
	int sum =0;

	for(i = 0; i<N2; i++ ){  // Iterates  through rows of matrix
		sum = 0;
	    for(j=0; j<N2; j++){ // Iterates through coloumns of matrix
	            if (i!=j){
	                sum = sum + fabs(mat[i][j]); // add sum of all non diagonals from row
	            }

	        }
	    if (sum < fabs(mat[i][i])){ // increments if diagonal is greater then sum of row elements
	        count ++;
	    }
	    }
	    if(count == N2){ // return one if matrix is a diagonal
	        isDiag = 1;
	    }
    return isDiag;

}
