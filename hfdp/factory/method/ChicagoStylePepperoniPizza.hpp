#pragma once

#include "Pizza.hpp"

namespace hfdp::abstract_method
{

class ChicagoStylePepperoniPizza final : public Pizza
{
public:
    ChicagoStylePepperoniPizza();

    virtual void cut() override;
};

} // namespace hfdp::abstract_method
