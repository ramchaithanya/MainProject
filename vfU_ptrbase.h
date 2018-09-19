#ifndef __VFUPTRBASE__
#define __VFUPTRBASE__


#include <iostream>
#include <memory>
class Base {
    public:
        virtual void foo(const std::string &s)  = 0;
        virtual void bar() const = 0;
};
#endif
