#include <iostream>
using namespace std;
/**************************************************
 * Creator: Kevin Maguire
 * Purpose: Dot product of Two Arrays
 * Functions: two_array_dot_product
 * Parameters: vector_1, vector_2, number_of_elements
*******************************************************/

// Entire Array cannot be passed as an argument. You must pass a pointer.
int two_array_dot_product(int *vector1, int *vector2, int number_of_elements){
    int dot_product = 0;
    for (int i = 0; i < number_of_elements; i++){
        dot_product += vector1[i] * vector2[i];
    }
    return dot_product;
}
int main(){
    //Test 1
    int test1A[3] = { 8, 16, 32};
    int test1B[3] = {5, 9, 13};
    int number_of_elements_1 = 3;
    //Test 2
    int test2A[2] = {3, 8};
    int test2B[2] = {11, 22};
    int number_of_elements_2 = 2;
    //Test 3 = 30
    int test3A[4] = {1, 2, 3, 4};
    int test3B[4] = {1, 2, 3, 4};
    int number_of_elements_3 = 4;
    //Results and Printing
    int dot_product1 = two_array_dot_product(test1A, test1B, number_of_elements_1);
    int dot_product2 = two_array_dot_product(test2A, test2B, number_of_elements_2);
    int dot_product3 = two_array_dot_product(test3A, test3B, number_of_elements_3);
    cout << "Dot product for the following two arrays [8, 16, 32] and [5, 9, 13]: "
        << dot_product1 << endl;
    cout << "Dot product for the following two arrays [3, 8] and [11, 22]: " 
        << dot_product2 << endl;
    cout << "Dot product for the following two arrays [1, 2, 3, 4] and [1, 2, 3, 4]: " 
        << dot_product3 << endl;
    return 0;
}