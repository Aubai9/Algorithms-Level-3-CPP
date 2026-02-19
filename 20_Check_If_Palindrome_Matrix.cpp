#include<iostream>
#include<string>
#include<iomanip>

using namespace std;



void printMatrixElements(int  matrix[3][3],short Rows,short Cols)
{
    for(short i = 0 ; i < Rows; i++)
        {
            for(short j = 0 ; j < Cols; j++)
                {
                    cout<<setw(3)<<matrix[i][j]<<" \t ";
                }
            cout<<endl;
        }
}


bool isPalindromeNumber(int matrix[3][3],short Rows,short Cols)
{
    for(int i = 0 ; i < Rows; i++)
        {
            for(int j = 0; j < Cols; j++)
                {
                    if(matrix[i][j] != matrix[i][Rows - j - 1])
                        {
                            return false;
                        }
                }

        }
    return true;
}


int main()
{


    int matrix1[3][3] = {{1,2,1},{1,3,1},{1,4,1}};

    int matrix2[3][3] = {{2,2,5},{6,3,1},{7,4,9}};

    //Matrix 1
    cout<<" matrix 1 numbers : \n";
    printMatrixElements(matrix1,3,3);

    if(isPalindromeNumber(matrix1,3,3))
        {
            cout<<"Yes matrix is palindrome\n";
        }
    else
        {
            cout<<"NO matrix is NOT palindrome\n";
        }

    //Matrix 2

    cout<<"\n matrix 2 numbers : \n";
    printMatrixElements(matrix2,3,3);

    if(isPalindromeNumber(matrix2,3,3))
        {
            cout<<"Yes matrix is palindrome\n";
        }
    else
        {
            cout<<"NO matrix is NOT palindrome\n";
        }
    return 0;
}
