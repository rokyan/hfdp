#include "PancakeHouseMenuIterator.hpp"

namespace hfdp::iterator
{

PancakeHouseMenuIterator::PancakeHouseMenuIterator(const std::list<MenuItem>& items)
    : current(std::begin(items))
    , end(std::end(items))
{}

const MenuItem& PancakeHouseMenuIterator::next()
{
    return *current++;
}

bool PancakeHouseMenuIterator::hasNext() const
{
    return (current != end);
}

} // namespace hfdp::iterator