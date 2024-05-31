#include <iostream>
#include "Derived.h"
using namespace std;
int main ()
{
Base* pba = new Derived();
Base* pbb = new Base();
Derived * pd;
pd = dynamic_cast<Derived*>(pba);
if (pd == nullptr)
{
cout << "Null pointer on first type-cast.\n";
}
pd = dynamic_cast<Derived*>(pbb);
if (pd == nullptr)
{
cout << "Null pointer on second type-cast.\n";
}
delete pba;
pba = nullptr;
delete pbb;
pbb = nullptr;
return 0;
}