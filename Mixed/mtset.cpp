#include "mtset.h"

#include <iostream>

mtset::mtset()
{
    list = std::vector<std::shared_ptr<mtalgo>>
    {
        std::make_shared<mtalgo>(1),
        std::make_shared<mtalgo>(2),
        std::make_shared<mtalgo>(3),
        std::make_shared<mtalgo>(4),
        std::make_shared<mtalgo>(5),
        std::make_shared<mtalgo>(6),
        std::make_shared<mtalgo>(7),
        std::make_shared<mtalgo>(8),
        std::make_shared<mtalgo>(9),
    };
}

void mtset::doforall()
{
    int i = 0;
    for (auto a : list)
    {
        a->calculate();
        System::Threading::Thread::Sleep(100);
        if (i == 3)
        {
            System::GC::Collect();
        }
        ++i;
    }
}
