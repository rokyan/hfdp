#pragma once

#include "MenuComponent.hpp"

#include <memory>

namespace hfdp::composite
{

class Waitress final
{
public:
    Waitress(std::unique_ptr<MenuComponent> allMenus);

    Waitress(const Waitress&) = delete;
    Waitress& operator=(const Waitress&) = delete;

    Waitress(Waitress&&) = default;
    Waitress& operator=(Waitress&&) = default;

    void printMenu() const;

private:
    std::unique_ptr<MenuComponent> allMenus;
};

} // namespace hfdp::composite
