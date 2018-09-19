#ifndef __VFUPTRDERIVED__
#define __VFUPTRDERIVED__
#include "vfU_ptrbase.h"

class Derived : public Base {
    public:
        void foo(const std::string &s)   {
            std::cout << "foo" <<s<< std::endl;

        };

        void bar() const override{
            std::cout << "bar" << std::endl;
        };
};
#endif
