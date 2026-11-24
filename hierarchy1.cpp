
#include "hierarchy1.h"
base::base(int b){
    basedata = b;
    cout << "Base constructor called" << endl;
}
base::~base(){
    cout << "Base destructor called" << endl;
}
derived1::derived1(int b, int d1) : base(b){
    derived1_data = d1;
    cout << "Derived1 constructor called" << endl;
}
derived1::~derived1(){
    cout << "Derived1 destructor called" << endl;
}
derived2::derived2(int b, int d1, int d2)
    : derived1(b, d1){

    derived2_data = d2;
    cout << "Derived2 constructor called" << endl;
}
derived2::~derived2(){
    cout << "Derived2 destructor called" << endl;
}
void derived2::print(){
    cout << "Print function called" << endl;
    cout << "Base Data: " << basedata << endl;
    cout << "Derived1 Data: " << derived1_data << endl;
    cout << "Derived2 Data: " << derived2_data << endl;
}
