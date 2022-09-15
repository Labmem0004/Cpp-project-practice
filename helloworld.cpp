#include <iostream>
#include <string>
#include "Sales_data.h"

using namespace std;

int main() {
    unsigned u = 10, u2 = 42;
    cout << u2 - u << endl;
    cout << u - u2 << endl;
    
    int i = 10, i2 = 42;
    cout << i2 - i << endl;
    cout << i - i2 << endl;
    cout << i - u << endl;
    cout << u - i << endl;

    int i3 = 0123;
    cout << i3 << endl;

    int val = 42;
    int *p = &val;
    cout << p << endl;
    cout << *p << endl;

    return 0;

    //加了一行没啥用的注释
};