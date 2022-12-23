#include "CafeMenuIterator.hpp"

namespace hfdp::iterator
{

CafeMenuIterator::CafeMenuIterator(const std::unordered_map<std::string, MenuItem>& items)
    : current(std::begin(items))
    , end(std::end(items))
{}

const MenuItem& CafeMenuIterator::next()
{
    return (current++)->second;
}

bool CafeMenuIterator::hasNext() const
{
    return (current != end);
}

} // namespace hfdp::iterator