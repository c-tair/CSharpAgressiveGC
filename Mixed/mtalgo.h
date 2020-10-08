#pragma once
class mtalgo
{
public:
    mtalgo(int v)
    {
        x = new int(v);
    }
    void calculate();
    ~mtalgo();
private:
    int * x;
};

