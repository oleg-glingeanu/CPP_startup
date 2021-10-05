#include <iostream>
#include <string>
#include <list>
#include <typeinfo>
#include <sstream>

using namespace std;


inline int fizzBuzz() {
    const string fizz = "Fizz";
    const string buzz = "Buzz";
    const string woof = "Woof";
    for (int i = 1; i < 101; i++) {
        stringstream ss;
        int i_num = i;
        ss << i_num << endl;
        string i_string = ss.str();
        if (i % 3 == 0)
            cout << fizz << " ";
        if (i % 5 == 0)
            cout << buzz << " ";
        if (i % 7 == 0)
            cout << woof << " ";
        if (i_string[0] == '3')
            cout << fizz << " ";
        if (i_string[1] == '3')
            cout << fizz << " ";
        if (i_string[0] == '5')
            cout << buzz << " ";
        if (i_string[1] == '5')
            cout << buzz << " ";
        if (i_string[0] == '7')
            cout << woof << " ";
        if (i_string[1] == '7')
            cout << woof << " ";
        cout << " " << i << ", ";
        
    }
    return 0;
}