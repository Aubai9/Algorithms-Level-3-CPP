#include<iostream>
#include<string>
#include<iomanip>
#include<ctime>

using namespace std;


int generateRandomNumber(int from, int to)
{
    return (rand() % (to - from + 1) + from);
}


void fillMatrixWithNumbers(int matrix[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
        {
            for (short j = 0; j < Cols; j++)
                {
                    matrix[i][j] = generateRandomNumber(1, 100);
                }
        }
}


void printMatrixElements(int  matrix[3][3], short Rows, short Cols)
{
    cout << "\nMatrix elements are: \n";
    for (short i = 0; i < Rows; i++)
        {
            for (short j = 0; j < Cols; j++)
                {
                    cout << setw(3) << matrix[i][j] << " \t ";
                }
            cout << endl;
        }
}


void calculateColsSumToMatrix(int matrix[3][3], int ColsSumArray[3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
        {
            int sum = 0;
            for (short j = 0; j < Cols; j++)
                {
                    sum += matrix[j][i];
                }
                    ColsSumArray[i] = sum;

        }
}


void printColsSum(int ColsSumArray[3], short Cols)
{
    cout << "\nThe following are the sum of each col in the matrix:\n";
    for (short i = 0; i < Cols; i++)
        {
            cout << "Row " << i + 1 << " Sum = " << ColsSumArray[i] << endl;
        }
}

int main()
{

    srand((unsigned)time(NULL));

    int matrix[3][3];
    int ColsSumArray[3];


    fillMatrixWithNumbers(matrix, 3, 3);


    printMatrixElements(matrix, 3, 3);


    calculateColsSumToMatrix(matrix, ColsSumArray, 3, 3);


    printColsSum(ColsSumArray, 3);

    return 0;
}
