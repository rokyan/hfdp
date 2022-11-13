#include "DarkRoast.hpp"

namespace hfdp
{

const std::string DarkRoast::getDescription() const noexcept
{
    return "Dark Roast Coffee";
}

double DarkRoast::cost() const noexcept
{
    return .99;
}

} // namespace hfdp