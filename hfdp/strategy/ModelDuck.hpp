#pragma once

#include "Duck.hpp"

namespace hfdp
{

class ModelDuck final : public Duck
{
public:
    ModelDuck();

    virtual void display() const override;
};

} // namespace hfdp
