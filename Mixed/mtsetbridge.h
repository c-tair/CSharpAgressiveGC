#pragma once
class mtset;

public ref class mtsetbridge
{
public:
    mtsetbridge();
    bool dothestuff();
    !mtsetbridge();
    virtual ~mtsetbridge();
private:
    mtset* myset;
    System::String^ mygcblocker;
};

