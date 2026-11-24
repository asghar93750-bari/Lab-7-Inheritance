
#ifndef P_H
#define P_H
#include <iostream>
using namespace std;
class Base
{
protected:
     int basedata{};

public:
     Base();
     Base(int b);
     ~Base();
};

class Derived1 : public Base
{
protected:
     int derived1data{};

public:
     Derived1();
     Derived1(int b, int d1);
     ~Derived1();
};

class Derived2 : public Derived1
{
private:
     int derived2data{};

public:
     Derived2(int b, int d1, int d2);

     Derived2(const Derived2 &obj);

     Derived2 &operator=(const Derived2 &obj);

     void setValue(int d2);

     void print();

     ~Derived2();
};

#endif
