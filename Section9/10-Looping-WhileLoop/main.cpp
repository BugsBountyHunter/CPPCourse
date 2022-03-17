// Section 9
// While Loop
#include <iostream>
using namespace std;
int main() {
  // Section 1:
/*
  int num {};
  cout << "Enter a positive integer - start the countdown : ";
  cin >> num;

  while(num > 0){
    cout << num << endl;
    --num;
  }
  cout << "Blast off!" << endl;
*/
  // Section 2:
/*
  int num {};
  cout << "Enter a postive integer to count up to: ";
  cin  >> num;

  int i {1};
  while(num >= i){
    cout << i << endl;
    i++;
  }
*/
  // Section 3:
/*  
  int number {};
  cout << "Enter an integer less than 100: ";
  cin >> number;
  while (number >= 100){ // !(number < 100)
    cout << "Enter an integer less than 100: ";
    cin >> number;
  }

  cout << "Thanks" << endl;
  */

  // Section 4:
  bool done {false};
  int number {0};

  while(!done){ // !done =  true
    cout << "Enter an integer between 1 and 5: ";
    cin >> number;

    if(number <= 1 || number >= 5)
      cout << "Out of range, tray again" << endl;
    else{
      cout << "Thanks!" <<endl;
      done = true;
    }
  }

  cout << endl;
  return 0;
}