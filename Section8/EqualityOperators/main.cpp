#include <iostream>

using namespace std;

int main(){
    bool equal_result {false};
    bool not_equal_result {true};
    
    int num1{}, num2{};
    
    cout << boolalpha; //will display true/false instead of 0/1 for booleans
    
    cout << "Enter two integers separated by a space: ";
    cin >> num1 >> num2;
    equal_result = (num1 == num2);
    not_equal_result = (num1 != num2);
    cout << "Comparision result (Equals): " << equal_result << endl;
    cout << "Comparision result (Not Equals): " << not_equal_result << endl;
    
    cout << "=========================" << endl;
    // Example 2 - Using Char
    char char1{}, char2{};
    
    cout << "Enter two characters separated by a space: ";
    cin >> char1 >> char2;
    equal_result = (char1 == char2);
    not_equal_result = (char1 != char2);
    cout << "Comparision result (Equals): " << equal_result << endl;
    cout << "Comparision result (Not Equals): " << not_equal_result << endl;
    
    cout << "=========================" << endl;
    // Example 3 - Double
    double double1{}, double2{};
    cout << "Enter two Double separated by a space: ";
    cin >> double1 >> double2;
    equal_result = (double1 == double2);
    not_equal_result = (double1 != double2);
    cout << "Comparision result (Equals): " << equal_result << endl;
    cout << "Comparision result (Not Equals): " << not_equal_result << endl;
    
    /*
     * Test Case
     * 12.1 12.1
     * 12.5 13.2
     * 12.0 11.9999999999999999999999999999999999 -> equal_result will be true, because 11.99999  =~ 12.0
     * */
    cout << "=========================" << endl;
    
    // Example 4 - Double with int
    int num3{}, double3{};
    cout << "Enter integer and a double separated by a space: ";
    cin >> num3 >> double3;
    equal_result = (num3 == double3);
    not_equal_result = (num3 != num3);
    cout << "Comparision result (Equals): " << equal_result << endl;
    cout << "Comparision result (Not Equals): " << not_equal_result << endl;
    /*
     * Test Case
     * 10   10.0  equal_result -> will be true, because will be convert 10 to 10.0
     * 10   9.9999999999999999999
     * */
    return 0;
}
