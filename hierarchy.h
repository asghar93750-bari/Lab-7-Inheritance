#ifndef HIERARCHY_H
#define HIERARCHY_H

class base{
    private:
    int basedata{};
    public:
    base();
    ~base();
};
//derived1 class.
class derived1:public base{
    private:
    int derived1_data{};
    public:
    derived1();
    ~derived1();
};
//derived2 class.
class derived2:public derived1{
    private:
    int derived2_data{};
    public:
    derived2();
    ~derived2();
};

#endif