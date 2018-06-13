// compstr2.cpp -- comparing strings using arrays
#include <iostream>
#include <string>     // string class

int compstr2_test()
{
    using namespace std;
    string word = "?ate";

    for (char ch = 'a'; word != "mate"; ch++)
    {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loop ends, word is " << word << endl;
    // cin.get();
    return 0; 
}
