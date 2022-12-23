#pragma once

#include "Menu.hpp"

#include <string>
#include <unordered_map>

namespace hfdp::iterator
{

class CafeMenu final : public Menu
{
public:
    CafeMenu();

    void addItem(const std::string& name, const std::string& description, bool vegetarian, double price);

    virtual std::unique_ptr<Iterator<MenuItem>> createIterator() const override;

private:
    std::unordered_map<std::string, MenuItem> items;
};

} // namespace hfdp::iterator
