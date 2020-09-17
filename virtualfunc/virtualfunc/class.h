//
//  class.h
//  virtualfunc
//
//  Created by Oscar Maldonado on 7/31/18.
//  Copyright © 2018 Oscar Maldonado. All rights reserved.
//

#ifndef class_h
#define class_h
#include <iostream>
#include <string>

using namespace std;

//virtual func

class petType
{
    void print() const;
    petType(string n = "");
private:
    string name;
};
class catType : public petType
{
public:
    catType(string n = "", string b = "");
    void print() const;
    
private:
    string breed;
};
#endif /* class_h */
