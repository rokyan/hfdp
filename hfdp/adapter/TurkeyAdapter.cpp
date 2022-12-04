#include "TurkeyAdapter.hpp"

#include <utility>

namespace hfdp::adapter
{

TurkeyAdapter::TurkeyAdapter(std::unique_ptr<Turkey> turkey)
    : turkey(std::move(turkey))
{}

void TurkeyAdapter::fly()
{
    for (auto times = 0; times < 5; times++)
    {
        turkey->fly();
    }
}

void TurkeyAdapter::quack()
{
    turkey->gobble();
}

} // namespace hfdp::adapter