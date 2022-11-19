#pragma once

#include "Pizza.hpp"

namespace hfdp
{

class ChicagoStyleClamPizza final : public Pizza
{
public:
    ChicagoStyleClamPizza();

    virtual void cut() override;
};

} // namespace hfdp
