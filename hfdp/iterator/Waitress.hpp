#pragma once

#include "DinerMenu.hpp"

#include <memory>

namespace hfdp::iterator
{

class Waitress final
{
public:
    Waitress(std::unique_ptr<Menu> pancakeHouseMenu, std::unique_ptr<Menu> dinerMenu, std::unique_ptr<Menu> cafeMenu);

    Waitress(const Waitress&) = delete;
    Waitress& operator=(const Waitress&) = delete;

    Waitress(Waitress&&) = default;
    Waitress& operator=(Waitress&&) = default;

    void printMenu() const;

private:
    void printMenu(const std::unique_ptr<Iterator<MenuItem>>& iterator) const;

private:
    std::unique_ptr<Menu> pancakeHouseMenu;
    std::unique_ptr<Menu> dinerMenu;
    std::unique_ptr<Menu> cafeMenu;
};

} // namespace hfdp::iterator
