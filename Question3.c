#include <stdio.h>
#include <stdlib.h>

#include "Questions.h"

void diag_scan(int mat [][N3], int arr []){

	int i = 1; // initialize variables
	int lines = (N3*2)-1;
	int m;
	int k = 0;

	for (m=1; m<=lines; m++){ // Iterates through diagonals of matrix
	    int j=1;
	    for(i=m; i>0; i--){ // iterates through rows
	        if (i+j == (m+1)&& (i<=N3)&&(j<=N3)){ //making sure i and j are not greater N3
	            arr[k] = mat[i-1][j-1]; //appends matrix value in order of diagonals
	            j++;
	            k++;
	        }
	        else{ j++; }
	    }
	}
	}
