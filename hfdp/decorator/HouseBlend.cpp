#include "HouseBlend.hpp"

namespace hfdp::decorator
{

const std::string HouseBlend::getDescription() const noexcept
{
    return "House Blend Coffee";
}

double HouseBlend::cost() const noexcept
{
    return .89;
}

} // namespace hfdp::decorator