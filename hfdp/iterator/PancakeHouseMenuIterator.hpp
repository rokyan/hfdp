#pragma once

#include "Iterator.hpp"
#include "MenuItem.hpp"

#include <list>

namespace hfdp::iterator
{

class PancakeHouseMenuIterator final : public Iterator<MenuItem>
{
private:
    using MenuItemIterator = std::list<MenuItem>::const_iterator;

public:
    PancakeHouseMenuIterator(const std::list<MenuItem>& items);

    virtual const MenuItem& next() override;
    virtual bool hasNext() const override;

private:
    MenuItemIterator current;
    MenuItemIterator end;
};

} // namespace hfdp::iterator
