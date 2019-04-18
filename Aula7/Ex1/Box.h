//
// Created by davischmitz on 18/04/19.
//

#ifndef EX1_BOX_H
#define EX1_BOX_H

#include <iostream>

using namespace std;

class Box {

public:
    Box() {
        cout << "Constructor called!" <<endl;
    }
    ~Box() {
        cout << "Destructor called!" <<endl;
    }
};


#endif //EX1_BOX_H
