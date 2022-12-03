#include "DarkRoast.hpp"

namespace hfdp::decorator
{

const std::string DarkRoast::getDescription() const noexcept
{
    return "Dark Roast Coffee";
}

double DarkRoast::cost() const noexcept
{
    return .99;
}

} // namespace hfdp::decorator