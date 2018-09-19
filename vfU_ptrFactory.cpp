#include"vfU_ptrbase.h"
#include"vfU_ptrFactory.h"

        std::unique_ptr<Base>::ContainerUnique getPtr() {

		std::unique_ptr<Base>ptr = std::unique_ptr<Derived>(new Derived());
		return ptr;
}
