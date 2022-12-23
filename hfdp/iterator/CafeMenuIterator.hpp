#pragma once

#include "Iterator.hpp"
#include "MenuItem.hpp"

#include <string>
#include <unordered_map>

namespace hfdp::iterator
{

class CafeMenuIterator final : public Iterator<MenuItem>
{
private:
    using MenuItemIterator = std::unordered_map<std::string, MenuItem>::const_iterator;

public:
    CafeMenuIterator(const std::unordered_map<std::string, MenuItem>& items);

    virtual const MenuItem& next() override;
    virtual bool hasNext() const override;

private:
    MenuItemIterator current;
    MenuItemIterator end;
};

} // namespace hfdp::iterator
