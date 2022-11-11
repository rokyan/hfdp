#pragma once

#include "quack_behavior.hpp"

namespace hfdp
{

class simple_quack final : public quack_behavior
{
public:
    virtual void quack() const override;
};

} // namespace hfdp
