#pragma once

#include "Duck.hpp"
#include "Turkey.hpp"

#include <memory>

namespace hfdp::adapter
{

class TurkeyAdapter final : public Duck
{
public:
    TurkeyAdapter(std::unique_ptr<Turkey> turkey);

    TurkeyAdapter(const TurkeyAdapter&) = delete;
    TurkeyAdapter& operator=(const TurkeyAdapter&) = delete;

    TurkeyAdapter(TurkeyAdapter&&) = default;
    TurkeyAdapter& operator=(TurkeyAdapter&&) = default;

    virtual void fly() override;
    virtual void quack() override;

private:
    std::unique_ptr<Turkey> turkey;
};

} // namespace hdfp::adapter
