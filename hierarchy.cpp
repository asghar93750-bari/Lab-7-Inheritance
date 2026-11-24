#include <iostream>
#include "hierarchy.h"
using namespace std;
base::base(){
    cout << "base constructor called" << std::endl;
}
base::~base(){
    cout << "base destructor called" << std::endl;
}
derived1::derived1(){
   cout << "derived1 constructor called" << std::endl;
}
derived1::~derived1(){
    cout << "derived1 destructor called" << std::endl;
}

derived2::derived2(){
   cout << "derived2 constructor called" << std::endl;
}
derived2::~derived2(){
    cout << "derived2 destructor called" << std::endl;
}
