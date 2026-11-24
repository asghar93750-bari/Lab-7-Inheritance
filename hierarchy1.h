#ifndef HIERARCHY_H
#define HIERARCHY_H
#include <iostream>
using namespace std;
class base
{
protected:
    int basedata{};
public:
    base(int b);
    ~base();
};
class derived1 : public base
{
protected:
    int derived1_data{};
public:
    derived1(int b, int d1);
    ~derived1();
};
class derived2 : public derived1
{
private:
    int derived2_data{};
public:
    derived2(int b, int d1, int d2);
    ~derived2();
    void print();
};
#endif
