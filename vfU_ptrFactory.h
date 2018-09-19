#ifndef __VFUPTRFACTORY__
#define __VFUPTRFACTORY__

#include "vfU_ptrbase.h"
#include "vfU_ptrDerived.h"
class ContainerUnique {
std::unique_ptr<Base> ptr;
    public:


        std::unique_ptr<Base> getPtr() {

             std::unique_ptr<Base> ptr = std::unique_ptr<Derived>(new Derived());
                return ptr;
}



};

#endif
