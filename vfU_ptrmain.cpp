#include<iostream>
#include "vfU_ptrFactory.h"

class mainclass
{
std::unique_ptr<Base> dr;
public:
mainclass()
{
//std::unique_ptr<ContainerUnique> dbfactory( new ContainerUnique());
ContainerUnique dbfactory;
std::string s("ram");
dr = dbfactory.getPtr();
//dr->foo(s);
func(s);
}
void func(const std::string &s)
{

 dr->foo(s);
}
};

int main()
{
mainclass m;
}
