#include "DuckAdapter.hpp"

#include <utility>

namespace hfdp::adapter
{

DuckAdapter::DuckAdapter(std::unique_ptr<Duck> duck)
    : times(0)
    , duck(std::move(duck))
{}

void DuckAdapter::gobble()
{
    duck->quack();
}

void DuckAdapter::fly()
{
    if (times++ % 5 == 0)
    {
        duck->fly();
    }

    times %= 5;
}

} // namespace hfdp::adapter