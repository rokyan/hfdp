#pragma once

#include "Pizza.hpp"

namespace hfdp::abstract_method
{

class ChicagoStyleVeggiePizza final : public Pizza
{
public:
    ChicagoStyleVeggiePizza();

    virtual void cut() override;
};

} // namespace hfdp::abstract_method

