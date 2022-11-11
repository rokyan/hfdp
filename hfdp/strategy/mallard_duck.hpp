#pragma once

#include "duck.hpp"

namespace hfdp
{

class mallard_duck final : public duck
{
public:
    mallard_duck();

    virtual void display() const override;
};

} // namespace hfdp
