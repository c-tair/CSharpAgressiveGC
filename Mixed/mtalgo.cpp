#include "mtalgo.h"

#include <iostream>

void mtalgo::calculate()
{
    std::cout << *x << std::endl;
}

mtalgo::~mtalgo()
{
    delete x;
    x = nullptr;
    std::cout << "~mtalgo" << std::endl;
}
