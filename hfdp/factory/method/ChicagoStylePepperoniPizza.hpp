#pragma once

#include "Pizza.hpp"

namespace hfdp
{

class ChicagoStylePepperoniPizza final : public Pizza
{
public:
    ChicagoStylePepperoniPizza();

    virtual void cut() override;
};

} // namespace hfdp
