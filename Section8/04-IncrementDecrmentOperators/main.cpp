//SEction 8
/*
 * Increment operator ++
 * Decrement operator --
 * Increments or decrements its operand by 1
 * can be used with integers, floating types and pointers
 * 
 * Prefix ++num
 * Postfix num--
 * 
 * ====Don't overise this operator!===
 * ALERT!!! Never use it twice for same variable in the same statement!!
 **/
 
#include <iostream>

using namespace std;

int main(){
    int counter {10};
    int result {0};
    
    // Example 1: Simple increment
    cout << "Counter: " << counter << endl;
    
    counter = counter + 1;
    cout << "Counter: " << counter << endl;
    
    counter++;
    cout << "Counter: " << counter << endl;
    
    ++counter;
    cout << "Counter: " << counter << endl;
    
    cout << "===========================" << endl; 
    // Example 2: Preincrement
    counter  = 10;
    result = 0;
    
    cout << "Counter: " << counter << endl;
    result = ++counter; // Note the pre increment
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;
    
    cout << "===========================" << endl;
    
    // Example 3: Post-increment
    counter = 10;
    result = 0;
    
    cout << "Counter: " << counter << endl;
    
    result = counter++; // Note the post increment
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;
    cout << "===========================" << endl;
    
    // Example 4
    counter = 10;
    result = 0;
    
    cout << "Counter: " << counter << endl;
    
    result = ++counter + 10;
    
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;
    cout << "===========================" << endl;
    
    // Example 5: 
    
    counter = 10;
    result = 0;
    
    cout << "Counter: " << counter << endl;
    
    result = counter++ + 10;
    
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;
    cout << "===========================" << endl;
    
    // Section 6: ALERT
    // cout << counter++ << ++counter << endl; // don't use it
    // reuslt = counter++ + ++counter
    return 0;
}