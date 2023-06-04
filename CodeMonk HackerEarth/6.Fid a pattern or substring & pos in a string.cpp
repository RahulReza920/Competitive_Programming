//  find returns index where pattern is found.
    //  If pattern is not there it returns predefined
    //  constant npos whose value is -1


#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str1("Heloooo every one");

    string str2("one");


if (str1.find(str2) != string::npos)
        cout << "str2 found in str1 at " << str1.find(str2)
             << " pos" << endl;
    else
        cout << "str2 not found in str1" << endl;


    return 0;

    }
