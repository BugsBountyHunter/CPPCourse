#include <iostream>

using namespace std;

int main(){
    // Section 1:  Declaring - initializing - accessing Array elements
    char vowels[] {'a', 'e', 'i', 'o', 'u'};
    cout << "\n The first vowel is:" << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[4] << endl;
    // Error: out of bounds - don't do this!!
    //cin >> vowels[0];
    
    double hi_temps [] {90.1, 89.8, 77.5, 81.6};
    cout << "\n The first temperature is: " << hi_temps[0] << endl;
    
    /*
     * Set the first elements in hi_temps to 100.7
     * We'll talk about assignments statement in an upcoming section
     * */
    hi_temps[0] = 100.7;
    cout << "The first high temperature is now: " << hi_temps[0] << endl;
    
    //Section 2: 
    int test_scores [5]; // test_scores [5] {} -> test_scores [5] {}  || test_scores [5] {100}  
    
    cout << "\nFirst score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third Score at index 2: " << test_scores[2]  << endl;
    cout << "Fourth Score at index 3: " << test_scores[3]  << endl;
    cout << "Fifth Score at index 4: " << test_scores[4]  << endl;
    
    
    cout << "\nEnter 5 test scores: ";
    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];
    cin >> test_scores[3];
    cin >> test_scores[4];
    
    cout << "\nFirst score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third Score at index 2: " << test_scores[2]  << endl;
    cout << "Fourth Score at index 3: " << test_scores[3]  << endl;
    cout << "Fifth Score at index 4: " << test_scores[4]  << endl;

    //Section 3: Print Array name -> output: address first element in array in memory 
    cout << "\nNotice what the value of the array name is: " << test_scores << endl;
    cout << endl;
    
    
    
    return 0;
}
