#include <iostream>
#include <string>
using namespace std;

// Utilitizing type conversion to output matrix multiplication of two matrices
void print_matrix_product(int** matrix1, int** matrix2, int row1, int col1, int row2, int col2){
    if (col1 != row2) {
        cout << "Cannot be completed" << endl;
    }
    else{
        int rslt[row1][col2];
        cout << "The multiplication of each corresponding row and column of the two matrices is as follows:\n";
        for (int i=0; i<row1; i++) {
            for (int j=0; j<col2; j++){
                rslt[i][j] = 0;
                string matrix1_string = "";
                string matrix2_string = "";
                for (int k=0; k<col1; k++) {
                    rslt[i][j] += matrix1[i][k] * matrix2[k][j];
                    matrix1_string += to_string(matrix1[i][k]) + " ";
                    matrix2_string += to_string(matrix2[k][j]) + " ";
                }
                cout << "[ " << matrix1_string << "]" << " x [ " << matrix2_string << "] = " << rslt[i][j] << endl;
            }
        }
    }
}

// Driver code
int main(){
    //Original
    int row1 = 2, col1 = 2;
    int row2 = 2, col2 = 3;
    //A1
    int row3 = 2, col3 = 2;
    //A2
    int row4 = 2, col4 = 4;
    //B1
    int row5 = 3, col5 = 3;
    //B2
    int row6 = 3, col6 = 2;
    
    //Example 1 from class
    int** matrix1 = new int*[row1];
    for (int i=0; i<row1; i++){
        matrix1[i] = new int[col1]; }
    matrix1[0][0] = 1; matrix1[0][1] = 2;
    matrix1[1][0] = 3; matrix1[1][1] = 4;

    // Example 2 from class
    int** matrix2 = new int*[row2];
    for (int i=0; i <row2; i++) {
        matrix2[i] = new int[col2]; }
    matrix2[0][0] = 10; matrix2[0][1] = 30; matrix2[0][2] = 50;
    matrix2[1][0] = 20; matrix2[1][1] = 40; matrix2[1][2] = 60;

    //A1
    int** matrix3 = new int*[row3];
    for (int i=0; i<row3; i++){
        matrix3[i] = new int[col3]; }
    matrix3[0][0] = 2; matrix3[0][1] = 5;
    matrix3[1][0] = 3; matrix3[1][1] = 8;

    //A2
    int** matrix4 = new int*[row4];
    for (int i=0; i<row4; i++){
        matrix4[i] = new int[col4]; }
    matrix4[0][0] = 6; matrix4[0][1] = 9; matrix4[0][2] = 11; matrix4[0][3] = 13;
    matrix4[1][0] = 12; matrix4[1][1] = 18; matrix4[1][2] = 22; matrix4[1][3] = 26;

    //B1
    int** matrix5 = new int*[row5];
    for (int i=0; i<row5; i++){
        matrix5[i] = new int[col5]; }
    matrix5[0][0] = 1; matrix5[0][1] = 2; matrix5[0][2] = 4;
    matrix5[1][0] = 8; matrix5[1][1] = 16; matrix5[1][2] = 32;
    matrix5[2][0] = 64; matrix5[2][1] = 128; matrix5[2][2] = 256;

    //B2
    int** matrix6 = new int*[row6];
    for (int i=0; i<row6; i++){
        matrix6[i] = new int[col6]; }
    matrix6[0][0] = 3; matrix6[0][1] = 5;
    matrix6[1][0] = 7; matrix6[1][1] = 9;
    matrix6[2][0] = 11; matrix6[2][1] = 13;

    print_matrix_product(matrix1, matrix2, row1, col1, row2, col2);
    print_matrix_product(matrix3, matrix4, row3, col3, row4, col4);
    print_matrix_product(matrix5, matrix6, row5, col5, row6, col6);
    return 0; 
    }