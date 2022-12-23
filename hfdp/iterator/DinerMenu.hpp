#pragma once

#include "Menu.hpp"

#include <vector>

namespace hfdp::iterator
{

class DinerMenu final : public Menu
{
public:
    DinerMenu();

    void addItem(const std::string& name, const std::string& description, bool vegetarian, double price);

    virtual std::unique_ptr<Iterator<MenuItem>> createIterator() const override;

private:
    std::vector<MenuItem> items;
};

} // namespace hfdp::iterator
