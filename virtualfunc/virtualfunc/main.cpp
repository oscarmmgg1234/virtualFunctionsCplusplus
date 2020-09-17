//
//  main.cpp
//  virtualfunc
//
//  Created by Oscar Maldonado on 7/31/18.
//  Copyright © 2018 Oscar Maldonado. All rights reserved.
//

#include <iostream>
#include <string>


using namespace std;

class petType
{
    
public:
    virtual void print() const //allows you to overide the base function and then allows you to use the subclass func
    {
        cout << name << endl;;
    }
    petType(string n)
    {
        name =n;
    }
private:
    string name;
};
class catType : public petType
{
public:
    
    catType(string n = "", string b = "")
    :petType (n)
    {
        breed = b;
        
    }
    void print() const
    {
        petType::print();
        cout << " and breed is: " << breed << endl;
    }
    
private:
    string breed;
};


void printr(petType* object)
{
    object->print();
}

int main()
{
    
    petType p("Lily");
    petType* pp;
    pp = &p;
    
    catType c("Cat","bengal");
    catType* cc;
    cc = &c;
    printr(cc);
    printr(pp);
    
    
    
    
    
    
    
    
    
    
}
