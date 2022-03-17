#include <iostream>
using namespace std;
int main() {
  // Section: Normal Style
  
  cout << "Enter an integer: ";
  int num {};
  cin >> num;

  if( num % 2 == 0)
    cout << num << " is even "<<endl;
  else
    cout << num << " is odd" << endl; 

  // Section 2: Conditional operator
  cout << num << " is " << ((num%2 == 0)? "even" : "odd") <<endl;



  // ========================================
  int num1{}, num2{};
  cout << "Enter two integers separated by space: ";
  cin >> num1 >> num2;
  if(num1 != num2){
    cout << "Largest: " << ((num1 > num2)? num1:num2) << endl;
    cout << "Smallest: " << ((num1 < num2)? num1:num2) << endl;
  }else{
    cout << "The number are the same" << endl;
  }
  cout << endl;
  return 0;
}