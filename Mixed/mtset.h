#pragma once
#include <iostream>
#include <memory>
#include <vector>

#include "mtalgo.h"

class mtset
{
public:
    mtset();

    void doforall();
    virtual ~mtset()
    {
        std::cout << "~mtset" << std::endl;
        for(auto a : list)
        {
            a.reset();
        }
    }
private:
    std::vector<std::shared_ptr<mtalgo>> list;
};

