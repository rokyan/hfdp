#pragma once

#include "MenuItem.hpp"
#include "Iterator.hpp"

#include <memory>

namespace hfdp::iterator
{

class Menu
{
public:
    virtual std::unique_ptr<Iterator<MenuItem>> createIterator() const = 0;

    virtual ~Menu() = default;
};

} // namespace hfdp::iterator
