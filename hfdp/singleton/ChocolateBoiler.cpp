#include "ChocolateBolier.hpp"

namespace hfdp::singleton
{

ChocolateBoiler& ChocolateBoiler::getInstance()
{
    static ChocolateBoiler instance;
    return instance;
}

ChocolateBoiler::ChocolateBoiler()
    : empty(true)
    , boiled(false)
{}

void ChocolateBoiler::fill()
{
    if (isEmpty())
    {
        empty = false;
        boiled = false;
    }
}

void ChocolateBoiler::boil()
{
    if (!isEmpty() && !isBoiled())
    {
        boiled = true;
    }
}

void ChocolateBoiler::drain()
{
    if (!isEmpty() && isBoiled())
    {
        empty = true;
    }
}

bool ChocolateBoiler::isEmpty() const noexcept
{
    return empty;
}

bool ChocolateBoiler::isBoiled() const noexcept
{
    return boiled;
}

} // namespace hfdp::singleton