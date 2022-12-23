#pragma once

#include "Iterator.hpp"
#include "MenuItem.hpp"

#include <vector>

namespace hfdp::iterator
{

class DinerMenuIterator final : public Iterator<MenuItem>
{
private:
    using MenuItemIterator = std::vector<MenuItem>::const_iterator;

public:
    DinerMenuIterator(const std::vector<MenuItem>& items);

    virtual const MenuItem& next() override;
    virtual bool hasNext() const override;

private:
    MenuItemIterator current;
    MenuItemIterator end;
};

} // namespace hfdp::iterator
