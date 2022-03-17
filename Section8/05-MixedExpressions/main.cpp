//SEction 8
// Mixed Type Expressions

/*
 * Ask the user to enter 3 integers
 * Calculate the sum of the integers then
 * calculate the average of the integers.
 * 
 * Display the 3 integers entered
 * the sum of the 3 integers and
 * the average of the 3 integers
 * */
#include <iostream>

using namespace std;

int main(){
    int total {};
    int num1{}, num2{}, num3{};
    const int count{3};
    
    cout << "Enter 3 integers separated by spaces: ";
    cin >> num1 >> num2 >> num3;
    
    total = num1 + num2 + num3;
    
    double average {0.0};
    average = static_cast<double> (total) / count; // Modern C++ Style || Compiler will convert count to double and result will be double
    //average = (double) total/count; C-Style  (Old-Style) 
    cout << "The 3 numbers were: " << num1 << ", " << num2 << ", " << num3 << endl;
    cout << "The Sum of the numbers is: "<< total << endl;
    cout << "The average of the number is: " << average << endl;
    
    cout << endl;
    
    /*
     * Test Case
     * 10 30 20  -> 20
     * 10 20 15  -> 15
     *  10 20 20 -> 16.6667
     * */
    return 0;
}