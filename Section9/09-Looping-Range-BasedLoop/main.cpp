#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
  int scores [] {10, 20, 30};

  //Using type
  for(int score: scores)
    cout << score << endl;
  
  //using (auto) keyword to let compiler detect type
  for(auto score: scores)
    cout << score << endl;

  // Section - Average temprature
  vector<double> temperatures {87.9, 77.9, 80.0, 72.5};
  double average_temp {};
  double total {};

  for(auto temp: temperatures)
    total += temp;

  if(temperatures.size() != 0 )
    average_temp = total / temperatures.size();

  cout << fixed << setprecision(1);
  cout << "Average temperature is: " << average_temp << endl;
  
  // Section using initialized in loop
  for(auto val: {1, 2, 3, 4, 5})
    cout << val << endl;

  // Section - String as a char*
  for(auto c: "This is a test")
    if( c == ' ')
      cout << "\t";
    else
      cout << c;

  cout << endl;
  
  return 0;
}