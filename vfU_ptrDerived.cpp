#include "vfU_ptrbase.h"

class Derived : public Base {
    public:
        void foo() const override {
            std::cout << "foo" << std::endl;

        };

        void bar() const override{
            std::cout << "bar" << std::endl;
        };
};
