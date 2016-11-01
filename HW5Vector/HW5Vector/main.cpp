//
//  main.cpp
//  HW5Vector
//
//  Created by Heidi Wiebers on 11/1/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//

#include <iostream>
#include "Vector.hpp"
#include <iostream>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <cctype>
#include <iomanip>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
int main() {
    //EX05_03 – 12.8: Implement vector class
    Vector<int> VInt;
    for(int i=0; i<10; i++)
    {
        VInt.pushBack(i+1);
    }
    cout<<"Numbers in the vector: ";
    for(int i=0; i<VInt.size(); i++)
    {
        cout << VInt.at(i) << " ";
    }
    Vector<string> VString;
    VString.pushBack("Dallas");
    VString.pushBack("Houston");
    VString.pushBack("Austin");
    VString.pushBack("Norman");
    cout<<"\nStrings in the string vector: ";
    for(int i=0; i< VString.size(); i++)
    {
        cout<<VString.at(i)<< " ";
    }
    VString.popBack();
    Vector<string> v2;
    v2.swap(VString);
    v2.pushBack("Atlanta");
    cout<<"Strings in the vector v2: ";
    for(int i=0; i< v2.size(); i++)
    {
        cout<< v2.at(i)<< " ";
    }

    return 0;
}
