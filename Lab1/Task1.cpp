#include <iostream>
#include <string>
using namespace std;


inline int task1() {
    cout << "Hello" << "\n";
    cout << " " << "\n";
    string first = "Mary";
    string last = "Rose";
    cout << "Hello " << first << "\n";
    cout << first << last << "\n";
    int total = 10;
    cout << total << "\n";
    cout << to_string(total) << "." << "\n";
    cout << ("Wait...") << "\n";
    cout << "What is your name: ";
    string person = {};
    cin >> person;
    cout << "Hi, " << person << "\n";
    cout << "Done";
    return 0;
}