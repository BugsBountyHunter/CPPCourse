//Section 8
// Arthmetic operators
/* 
 * + addition
 * - subtraction
 * * multiplication
 * / division
 * % modulo or reminder (Works only with integers)
 *  +, -, * and / Operators are overloaded to work with multiple types such as int, double, etc.
 *  % only for integer types
 * 
 * */
#include <iostream>

using namespace std;

int main(){
        // Section 1: Calculate num1, num2 on fly
        int num1 {200};
        int num2 {100};
        
        cout << num1 << " + " << num2 << " = " << num1 + num2 <<endl;

        //Section 2: Clacualte num1 ansd num2 in a new variable
        int result {0};
        result = num1 + num2;
        cout << num1 << " + " << num2 << " = " << result << endl;
        
        result = num1 - num2;
        cout << num1 << " - " << num2 << " = " << result << endl;
        
        result = num1 * num2;
        cout << num1 << " * " << num2 << " = " << result << endl;
        
        result = num1 / num2;
        cout << num1 << " / " << num2 << " = " << result << endl;

        //NOTE: Division num2 / num1
        
        result = num2 / num1;  // Expect -> 0.5 double but 0 if int
        cout << num2 << " / " << num1 << " = " << result << endl;
        
        // Section 3: [%] Modulo or reminder
        result = num1 % num2;
        cout << num1 << " % " << num2 << " = " << result << endl;
        //-------------
        num1 = 10; // Assignment operator
        num2 = 3; 
        
        result = num1 % num2;
        cout << num1 << " % " << num2 << " = " << result << endl;
        // Section 4: Precedence
        /*
         * Precedence [PEMDAS]
         * [P] () Parentheses
         * [E]    Exponents (Power)
         * [M] *  Multiplication
         * [D] /  Division
         * [A] +  Addition
         * [S] -  Subtraction
         * */
        result = num1 * 10 + num2; 
        cout << "Precedence result: " << result << endl; 
        //Section 5: Using double and int 
        cout << 5 / 10 << endl; // result will be int, because i used int
        cout << 5.0 / 10.0 << endl; // result will be double, because i used double 
        
        return 0;
}
