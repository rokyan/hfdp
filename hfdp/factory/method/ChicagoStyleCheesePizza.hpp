#pragma once

#include "Pizza.hpp"

namespace hfdp::abstract_method
{

class ChicagoStyleCheesePizza final : public Pizza
{
public:
    ChicagoStyleCheesePizza();

    virtual void cut() override;
};

} // namespace hfdp::abstract_method
