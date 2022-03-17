// Section 9
// Shipping

/* 
    Shipping cost calculator
    
    Ask the user for package dimension in inches
    length, width, height - these should be integers
    
    All dimension must be 10 inches or less or we cannot ship it
    
    Base cost $2.50
    If package volume is greater than 100 cubic inches there is a 10% surcharge
    If package volume is greater than 500 cubic inches there is a 25% surcharge

*/
#include <iostream>
#include <iomanip> // remember input/output manipulate
using namespace std;
int main() {
  int length{}, width{}, height{};
  int max_dimention_length {10};
  
  double base_cost {2.50};

  const int tire1_threshold {100}; // Vloume 
  const int tire2_threshold {500}; // Volume

  double tire1_surchange {0.10}; // 10% extra
  double tire2_surchange {0.25}; // 25% extra

  // All dimension must be 10 inches or less
  int package_volume {};

  cout << "Welcome to the package cost calculator" <<endl;
  cout << "Enter length, width, and height of the pacakge separated by space : ";
  cin >> length >> width >> height;
  
  if(length > max_dimention_length || width > max_dimention_length || height > max_dimention_length){
    cout << "Sorry, package rejected - dimension exceeded " << endl;
  }else{
    double package_cost {};
    package_volume = length * width * height;
    package_cost = base_cost;

    if(package_volume > tire2_threshold){
      package_cost += package_cost * tire2_surchange;
      cout << " Adding tire 2  surchange" << endl;
    }else if (package_volume > tire1_threshold){
      package_cost += package_cost * tire1_surchange;
      cout << " Adding tire 1  surchange" << endl;
    }

    cout << fixed << setprecision(2); // print  dollars nicely
    cout << "The volume of your package is: " << package_volume << endl;
    cout << "You package will cost $" << package_cost << endl;
  }

  cout << endl;
  return 0;
  
}