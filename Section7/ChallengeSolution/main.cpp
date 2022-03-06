#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    //TODO:: Section 1: Declare 2 empty vector
    vector<int> vector1 {};
    vector<int> vector2 {};
    
    cout << "Add first element to vector1: ";
    int vector1_element {};
    cin >> vector1_element;
    vector1.push_back(vector1_element);
    
    
    cout << "Add Second element to vector1: ";
    cin >> vector1_element;
    vector1.push_back(vector1_element);
    
    
    cout << "\nVector1 Elements" << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "Vector1 Size is : " << vector1.size() << endl;
    
    cout << "Add first element to vector2: ";
    int vector2_element {};
    cin >> vector2_element;
    vector2.push_back(vector2_element);
    
    cout << "Add Second element to vector2: ";
    cin >> vector2_element;
    vector2.push_back(vector2_element);
    
    cout << "\nVector1 Elements" << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << "Vector2 Size is : " << vector2.size() << endl;
    // ======================================
    // TODO:- Section 2: Declare an empty 2D Vector called vector_2d
    vector<vector<int>> vector_2d {};
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    cout << "\nDisplay 2D Vector elements" << endl;
    cout << vector_2d.at(0).at(0) << "\t";
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << "\t";
    cout << vector_2d.at(1).at(1) << endl;
    
    // ======================================
    //TODO::- Section 3: 
//    vector_2d.at(0).at(0) = 1000;
    vector1.at(0) = 1000;
    cout << "\nDisplay 2D Vector elements again" << endl;
    cout << vector_2d.at(0).at(0) << "\t";
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << "\t";
    cout << vector_2d.at(1).at(1) << endl;
    
    cout << "\nVector1 Elements Agin" << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    
    
    
    
    return 0;
}
