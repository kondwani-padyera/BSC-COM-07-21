#include <iostream>
#include "Derived.h"
using namespace std;
int main ()
{
Base* pBase = new Base();
Derived* pDerived = static_cast<Derived*>(pBase);
delete pBase;
pBase = nullptr;
return 0;
}