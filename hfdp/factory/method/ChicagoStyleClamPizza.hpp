#pragma once

#include "Pizza.hpp"

namespace hfdp::abstract_method
{

class ChicagoStyleClamPizza final : public Pizza
{
public:
    ChicagoStyleClamPizza();

    virtual void cut() override;
};

} // namespace hfdp::abstract_method
