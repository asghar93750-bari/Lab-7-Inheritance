
#include <iostream>
#include "hierarchy1.h"
using namespace std;
int main()
{
    derived1 d1(2, 4);
    derived2 d2(10, 20, 30);
    d2.print();
    return 0;
}
