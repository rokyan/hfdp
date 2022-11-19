#pragma once

#include "Pizza.hpp"

namespace hfdp
{

class ChicagoStyleCheesePizza final : public Pizza
{
public:
    ChicagoStyleCheesePizza();

    virtual void cut() override;
};

} // namespace hfdp
