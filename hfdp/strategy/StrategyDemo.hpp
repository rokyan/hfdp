#pragma once

#include "Demo.hpp"
#include "Duck.hpp"

namespace hfdp
{

class StrategyDemo final : public Demo
{
public:
    virtual void run() const override;

private:
    void FlyAndQuack(const Duck& duck) const;
};

} // namespace hfdp
