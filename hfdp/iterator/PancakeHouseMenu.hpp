#pragma once

#include "Menu.hpp"

#include <string>
#include <list>

namespace hfdp::iterator
{

class PancakeHouseMenu final : public Menu
{
public:
    PancakeHouseMenu();

    void addItem(const std::string& name, const std::string& description, bool vegetarian, double price);

    virtual std::unique_ptr<Iterator<MenuItem>> createIterator() const override;

private:
    std::list<MenuItem> items;
};

} // namespace hfdp::iterator
