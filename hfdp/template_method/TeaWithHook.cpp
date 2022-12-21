#include "TeaWithHook.hpp"

#include <iostream>

namespace hfdp::template_method
{

void TeaWithHook::brew()
{
    std::cout << "Steeping some tea" << std::endl;
}

void TeaWithHook::addCondiments()
{
    std::cout << "Adding lemon" << std::endl;
}

bool TeaWithHook::customerWantsCondiments() const noexcept
{
    return true;
}

} // namespace hfdp::template_method