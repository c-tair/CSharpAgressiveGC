#include "mtsetbridge.h"
#include "mtset.h"

mtsetbridge::mtsetbridge()
{
    myset = new mtset();
    mygcblocker = "gcblocker";
}

bool mtsetbridge::dothestuff()
{
    myset->doforall();
    //System::Console::WriteLine(myset); //enabling blocks GC
    //System::Console::WriteLine(mygcblocker); //enabling blocks GC
    return true;
}

mtsetbridge::!mtsetbridge()
{
    System::Console::WriteLine("!mtsetbridge");
    delete myset;
    myset = nullptr;
}

mtsetbridge::~mtsetbridge()
{
    System::Console::WriteLine("~mtsetbridge");
    this->!mtsetbridge();
}
