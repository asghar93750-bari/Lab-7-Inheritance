
#include "p.h"
// Base class
Base::Base()
{
     basedata = 0;
     cout << "Base Default Constructor" << endl;
}
Base::Base(int b)
{
     basedata = b;
     cout << "Base Parameterized Constructor" << endl;
}
Base::~Base()
{
     cout << "Base Destructor" << endl;
}
// Derived1 class
Derived1::Derived1()
{
     derived1data = 0;
     cout << "Derived1 Default Constructor" << endl;
}
Derived1::Derived1(int b, int d1) : Base(b)
{
     derived1data = b;
     cout << "Derived1 Parameterized Constructor" << endl;
}
Derived1::~Derived1()
{
     cout << "Derived1 Destructor" << endl;
}
// Derived2 class
Derived2::Derived2(int b, int d1, int d2)
    : Derived1(b, d1)
{
     derived2data = d2;
     cout << "Derived2 Parameterized Constructor" << endl;
}
Derived2::Derived2(const Derived2 &obj)
    : Derived1(obj)
{
     derived1data = obj.derived1data;
     cout << "Derived2 Copy Constructor" << endl;
}
Derived2 &Derived2::operator=(const Derived2 &obj)
{
     if (this != &obj)
     {
          basedata = obj.basedata;
          derived1data = obj.derived1data;
          derived2data = obj.derived2data;
     }
     cout << "Derived2 Copy Assignment Operator" << endl;
     return *this;
}
void Derived2::setValue(int d2)
{
     derived2data = d2;
     cout << "setValue Function" << endl;
}
void Derived2::print()
{
     cout << "base data: " << basedata << endl;
     cout << "derived1data: " << derived1data << endl;
     cout << "derived2data: " << derived2data << endl;
     cout << "print Function" << endl;
}
Derived2::~Derived2()
{
     cout << "Derived2 Destructor" << endl;
}
