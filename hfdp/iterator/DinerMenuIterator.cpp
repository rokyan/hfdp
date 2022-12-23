#include "DinerMenuIterator.hpp"

namespace hfdp::iterator
{

DinerMenuIterator::DinerMenuIterator(const std::vector<MenuItem>& items)
    : current(std::begin(items))
    , end(std::end(items))
{}

const MenuItem& DinerMenuIterator::next()
{
    return *current++;
}

bool DinerMenuIterator::hasNext() const
{
    return (current != end);
}

} // namespace hfdp::iterator