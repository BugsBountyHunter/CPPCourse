#include <iostream>

using namespace std;

int main(){
    int num1 {10}; //initialized
    int num2 {20};
 
    // RHS = LHS(Evaluate it and set the value to the right-hand side)
    // 1- check if const int num1 = {10}  -> and need to assign it  num1 = 100
    // 2- 100 = num1;  //-> L-value - R-value  compiler error: L-Vlaue required as left operand of assignment
    // 3-  num1 = num2 = 1000; //( Two Assignment operators)
    // 4-  num1 = num2;
    // 5-  num1 = "Ahmed"; -> // Compiler Error: invalid conversion from 'cont char*' to 'int'. 
    num1 = 1000;
    
    cout << "Num1 is: " << num1 <<endl;
    cout << "Num2 is: " << num2 <<endl;
    
    cout << endl;
    
    return 0;
}
