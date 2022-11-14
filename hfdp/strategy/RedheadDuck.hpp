#pragma once

#include "Duck.hpp"

namespace hfdp
{

class RedheadDuck final : public Duck
{
public:
    RedheadDuck();

    virtual void display() const override;
};

} // namespace hfdp
