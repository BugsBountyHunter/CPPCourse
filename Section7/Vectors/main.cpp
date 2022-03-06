//Section7
//Vectors

#include <iostream>
#include <vector> //don't forget this in order to use vector
using namespace std;

int main(){
    
    //Section 1: 
    //vector <char> vowels; //empaty
    //vector <char> vowels (5);   // 5 is initialized zero
    vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
    // using array synatx to return vector elements
    cout << vowels[0] << endl;
    cout << vowels[4] << endl;
    
    //Section 2:
    //vector <int> test_scores (3); //3 elements all initialized to zero
    //vector <int> test_scores (3, 100); // 3 elements initialized to 100
    
    vector <int> test_scores {100, 98, 89};
    
    cout << "\n== Test scores using array syntax ==";
    cout << "\nTest scores using array syntax: " << endl;
    
    cout << test_scores[0] << endl;
    cout << test_scores[1] << endl;
    cout << test_scores[2] << endl;
    
    cout << "\n== Test Scores using vector syntax ==";
    cout << "\nTest Scores using vector syntax:" << endl;
    
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    
    cout << "\n== Get vector size using size() method ==";
    cout << "\nThere are " << test_scores.size() << " scores in the vector" << endl;
    
    //Section 3: add elements to vector using at() method: 
    cout << "\n== Adding a new elments to vector using at() method ==";
    cout << "\nEnter 3 test scores: ";
    cin >> test_scores.at(0);
    cin >> test_scores.at(1);
    cin >> test_scores.at(2);
    
    
    cout << "\nUpdate test scores: " << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    
    //Section 4: push_back() -> add a new item to array or vector
    cout << "\n== Adding a new elments in last position using push_back() method ==";
    cout << "\nAdd a new element to vector using push_back() method: ";
    int score_to_add {0};
    cin >> score_to_add;
    
    test_scores.push_back(score_to_add);
    
    cout << "\nEnter one more test score to add to the vector: ";
    cin >> score_to_add;
    test_scores.push_back(score_to_add);
    
    cout << "\nTest scores are now: " << endl; 
    
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << test_scores.at(3) << endl;
    cout << test_scores.at(4) << endl;
    
    cout << "\nThere are now " << test_scores.size() << " sorces in the vector" << endl;
    
    cout << "===================================================================================";
    
    
    //Section 5: Throw exception 
    cout << "\nout_of_range exception " << endl;
    //cout << "This should cause an exception!! " << test_scores.at(10);

    cout << "===================================================================================";
    
    //Section 6: Example of a 2D-Vector
    vector <vector<int>> movie_ratings {
        {1, 2, 3, 4},
        {1, 2, 4, 4},
        {1, 3, 4, 5}
    };
    
    //Using array syntax
    cout << "\nHere are the movie rating for reviewer #1 using array syntax: " << endl;
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings[0][1] << endl;
    cout << movie_ratings[0][2] << endl;
    cout << movie_ratings[0][3] << endl;
    
    cout << "\nHere are the movie rating for reviewer #2 using array syntax: " << endl;
    cout << movie_ratings[1][0] << endl;
    cout << movie_ratings[1][1] << endl;
    cout << movie_ratings[1][2] << endl;
    cout << movie_ratings[1][3] << endl;

    cout << "\nHere are the movie rating for reviewer #3 using array syntax: " << endl;
    cout << movie_ratings[2][0] << endl;
    cout << movie_ratings[2][1] << endl;
    cout << movie_ratings[2][2] << endl;
    cout << movie_ratings[2][3] << endl;    
    
    //Using Vector syntax
    cout << "\nHere are the movie rating for reviewer #1 using Vector syntax: " << endl;
    cout << movie_ratings.at(0).at(0) << endl;
    cout << movie_ratings.at(0).at(1) << endl;
    cout << movie_ratings.at(0).at(2) << endl;
    cout << movie_ratings.at(0).at(3) << endl;
    
    
    cout << "\nHere are the movie rating for reviewer #2 using Vector syntax: " << endl;
    cout << movie_ratings.at(1).at(0) << endl;
    cout << movie_ratings.at(1).at(1) << endl;
    cout << movie_ratings.at(1).at(2) << endl;
    cout << movie_ratings.at(1).at(3) << endl;
    
    
    cout << "\nHere are the movie rating for reviewer #3 using Vector syntax: " << endl;
    cout << movie_ratings.at(2).at(0) << endl;
    cout << movie_ratings.at(2).at(1) << endl;
    cout << movie_ratings.at(2).at(2) << endl;
    cout << movie_ratings.at(2).at(3) << endl;
    
    return 0;
}
