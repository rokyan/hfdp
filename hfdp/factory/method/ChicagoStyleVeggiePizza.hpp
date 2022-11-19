#pragma once

#include "Pizza.hpp"

namespace hfdp
{

class ChicagoStyleVeggiePizza final : public Pizza
{
public:
    ChicagoStyleVeggiePizza();

    virtual void cut() override;
};

} // namespace hfdp

