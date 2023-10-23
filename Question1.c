#include <stdio.h>
#include <stdlib.h>

#include<math.h>
#include "Questions.h"



void add_vectors(double vector1[],double vector2[],double vector3[],int size)
{
	int i = 0;
	for(i = 0; i<size; i++) { // loop to go through indexes of vector
		vector3[i] = vector1[i] + vector2[i]; // add vectors 1&2 to vectore
	}
    /*vector3 should store the sum of vector1 and vector2. 
	You may assume that all three arrays have the size equal to n
	*/
	//write your code below
	
	
}

double scalar_prod(double vector1[],double vector2[],int size)
{
	// this is the variable holding the scalar product of the two vectors
    double prod=0;

	//write your code below to calculate the prod value
	
    int i = 0;
    	for(i = 0; i<size; i++) { // loop to multiply vectors
    		prod = prod + (vector1[i] * vector2[i]);
    	}

	
	// return the result
    return prod;
}

double norm2(double vector1[], int size)
{
	//this is the variable holding the L2 norm of the passed vector
    double L2; // Initialize variable
	
    
	//write your code here
	// you should call function scalar_prod().
    L2 = scalar_prod(vector1, vector1, size); // return scaler product of vector 1

    L2 = sqrt(L2);

	//finally, return the L2 norm 
    return L2;
}
