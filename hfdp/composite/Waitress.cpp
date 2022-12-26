#include "Waitress.hpp"

#include <utility>

namespace hfdp::composite
{

Waitress::Waitress(std::unique_ptr<MenuComponent> allMenus)
    : allMenus(std::move(allMenus))
{}

void Waitress::printMenu() const
{
    if (allMenus != nullptr)
    {
        allMenus->print();
    }
}

} // namespace hfdp::composite