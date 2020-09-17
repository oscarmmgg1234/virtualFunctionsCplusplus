//
//  main.cpp
//  virtualFunc2
//
//  Created by Oscar Maldonado on 8/1/18.
//  Copyright © 2018 Oscar Maldonado. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

class Enemy
{
public:
    Enemy(string n)
    {
        attackk = n;
    }
   virtual void attack() const
    {
        cout << attackk;
    }
    
private:
    string attackk;
};

class Monster : public Enemy
{
private:
    string nameM;
public:
    Monster(string n, string M)
    : Enemy(n)
    {
        nameM = M;
    }
    void attack() const
    {
        Enemy::attack();
        cout << nameM << endl;
    }
};

void printr(Enemy* f)
{
    f->attack();
}

int main() {
    
    Enemy n("Its an  Enemy");
    Monster m("ninja", "monster attacked");
    
  
    Enemy* p;
    p = &m;
    printr(p);
    
    

    
}
