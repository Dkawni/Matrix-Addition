#include <stdio.h>
#include <stdlib.h>

/*
This program adds different matrices together
It reads the input of the user and put it into an array, then adds each specific location in the array
with each other
*/
void ReadMatrix(int numRows, int numColumns, int matrixA[numRows][numColumns], int matrixB[numRows][numColumns]) {
    /*
    This function asks the user to read a Matrix until it hits the number of rows and columns they input
    @numRows: the number of rows the user wants the matrix to be
    @numColumns: the number of columns the user wants the matrix to be
    @matrixA: The user inputed matrix with specified rows and columns
    @matrixB: the second user inputed matrix with specified rows and columns
    */

    printf("Enter Matrix A\n");
    for (int i = 0; i < numRows; ++i) { //for every row
        for (int j = 0; j < numColumns; ++j) { //for every column
            scanf("%d", &matrixA[i][j]); //inputs into the specific row and column space
    }
    }

    printf("Enter Matrix B\n"); //same thing as above
     for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numColumns; ++j) {
            scanf("%d", &matrixB[i][j]); 
        }
    }
}


void AddMatrix(int numRows, int numColumns, int matrixA[numRows][numColumns], int matrixB[numRows][numColumns], int matrixC[numRows][numColumns]) {
    /*
    This adds the matrix at the corresponding row and column to each other
    @matrixC: the new amtrix that is made from adding matrixA and mtatrixB
    @i and j: used to seperate rows and columns so the computer doesnt get confused
    */

    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numColumns; ++j) {
            matrixC[i][j] = matrixA[i][j] + matrixB[i][j];
            //adds corresponding row to corresponding column through both for loops
        }
    }

    printf("A + B =\n");
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numColumns; ++j) {
            printf("%d ", matrixC[i][j]); 
            //displays each number got from above in corresponding row and column
        }
        printf("\n");
    }
}

int main() {
    /*
    Here to scan things and send them off to the right functions to get the final numbers
    @numRows: user specified rows
    @numColumns: user specified columns
    @matricA,B: the user inputted matrices that the computer will eventually add
    @matrixC: called to AddMatrix to add A and B and get the new matrix
    */
    int numRows;
    int numColumns;

    printf("Please enter the number of rows: \n");
    scanf("%d", &numRows);

    printf("Please enter the number of columns: \n");
    scanf("%d", &numColumns);


    int matrixA[numRows][numColumns];
    int matrixB[numRows][numColumns];
    int matrixC[numRows][numColumns];
 
    ReadMatrix(numRows, numColumns, matrixA, matrixB); //scans the user specified value


    AddMatrix(numRows, numColumns, matrixA, matrixB, matrixC); //gets the value of the added matric

}