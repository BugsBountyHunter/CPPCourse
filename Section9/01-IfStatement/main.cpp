#include <iostream>

using namespace std;
int main() {
  int num {};
  const int min {10};
  const int max {100};

  cout << "Enter a number between " << min <<  " and " << max   << " : "<< endl;
  cin >> num;

  if(num >= min){
    cout << "\n======== If Statement1 =======" << endl;
    cout << num << " is greater than or equal to " << min << endl;
    int diff { num - min};
    cout << num << " is " << diff << " greater than " << min << endl;
  }

  if(num <= max){
    cout << "\n======== If Statement2 =======" << endl;
    cout << num << " is less than or equal to " << max << endl;
    int diff {max - num};
    cout << num << " is " << diff << " less than " << max << endl;
  }

  if(num <= max || num >= min){
    cout << "\n======== If Statement3 =======" << endl;
    cout << num << " is in range " << endl;
    cout << " This means statements 1 and 2 must also display" << endl;
  }

    if(num == max || num == min){
    cout << "\n======== If Statement4 =======" << endl;
    cout << num << " is right boundary " << endl;
    cout << " This means all 4 statements display" << endl;
  }
}