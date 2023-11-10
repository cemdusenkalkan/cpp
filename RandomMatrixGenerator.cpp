#include <iostream>
#include <string>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

//generate a matrix with random rows, random columns, random values, return the matrix
int** MatrixCreatorint(int &numRows, int &numColumns)
{
  numRows = rand() % 10 + 1;
  numColumns = rand() % 10 + 1;

  int** mat = new (nothrow) int*[numRows];
  if (mat != nullptr) {
    int* arr = new (nothrow) int[numRows*numColumns];
    if (arr != nullptr) {
      for (int i=0; i<numRows; i++)
      mat[i] = &arr[i*numColumns];
    }
  }
  for(int i=0; i<numRows; i++)
  {
    for(int j=0; j<numColumns; j++)
    {
      mat[i][j] = rand() % 10 + 1;
    }
  }



  return mat;

   
}

void PrintMatrix(int** mat, int numRows, int numColumns)
{
    if(mat!=nullptr)
    {
        for(int i=0; i<numRows; i++)
        {
            for(int j=0; j<numColumns; j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
}

void DeleteMatrix(int** &mat)
{
  if(mat!=nullptr)
  {
    if(mat[0]!=nullptr)
    {
      delete[] mat[0];
      delete[] mat;
      mat=nullptr;
    }
  }
}

int main(){
  

    srand (time(NULL));

    int row;
    int column;
  

    int** newMatrix = MatrixCreatorint(row, column);
    PrintMatrix(newMatrix, row, column);
    return 0;
}
