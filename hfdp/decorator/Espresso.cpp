#include "Espresso.hpp"

namespace hfdp
{

const std::string Espresso::getDescription() const noexcept
{
    return "Espresso";
}

double Espresso::cost() const noexcept
{
    return 1.99;
}

} // namespace hfdp