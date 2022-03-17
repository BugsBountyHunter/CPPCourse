//Section 8
//Logical Operators

#include <iostream>

using namespace std;

int main(){
    int num {};
    const int lower {10};
    const int upper {20};
    
    cout << boolalpha;
    
    //Section 1- Determine if an entered integer is between two other integers
    //assume lower < upper
    cout << "Enter an integer - the bounds are " << lower << " and " << upper << " : ";
    cin >> num;
    
    bool within_bounds (false);
    
    within_bounds = (num > lower && num < upper);
    cout << num << " is between " << lower << " and " << upper << " : "<< within_bounds << endl;
    cout << "\n==================================";
    /*
     * Test Case
     * 15
     * 21
     * 20
     * 9
     * 10
     * */
     //Section 2- Determine if an entered integer is outside two other integers
     cout << "\nEnter an integer - the bounds are " << lower << " and " << upper << " : ";
     cin >> num;
     
     bool outside_bounds {false};
     outside_bounds = (num < lower || num > upper);
     cout << num << " is outside " << lower << " and " << upper << " : " << outside_bounds << endl;
     cout << "\n==================================";
     /*
     * Test Case
     * 20
     * 10
     * 11
     * 22
     * 9
     * */
     //Section 3- Determine if an entered integer is exactly on the boundary
     // assume lower < upper
     cout << "\nEnter an integer - bounds are " << lower << " and " << upper << " : ";
     cin >> num;
     bool on_bounds {false};
     on_bounds = (num == lower || num == upper);
     cout << num << " is on one of the bounds which are " << lower << " and " << upper << endl;
     cout << "\n==================================";
     /*
     * Test Case
     * 10
     * 20
     * 15
     * 9
     * 21
     * */
     //Section 4- Determine is you need to wear a coat based on temperature and wind speed
     bool wear_coat {false};
     double temperature {};
     int wind_speed {};
     
     const int wind_speed_for_coat {25}; // will over this value requires a coat
     const double temperature_for_coat {45}; // temprature below this value requires a coat
     
     // Require a coat if either wind is to high OR temperature is too low
     cout << "\nEnter the current temperature in (F): ";
     cin >> temperature;
     cout << "Enter Wind Speed in (mph): ";
     cin >> wind_speed;
     
     wear_coat = (temperature < temperature_for_coat || wind_speed > wind_speed_for_coat);
     cout << "Do you need to wear a coating using OR? " << wear_coat << endl;
     
     //Require a coat if BOTH the the windspeed is too high AND temperature is too low
     wear_coat = (temperature < temperature_for_coat && wind_speed > wind_speed_for_coat);
     cout << "Do you need to wear a coat using AND? " << wear_coat << endl;
     
     /*
     * Test Case
     * 30 60
     * 30 5
     * */
     return 0;
}