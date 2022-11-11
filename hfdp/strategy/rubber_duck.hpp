#pragma once

#include "duck.hpp"

namespace hfdp
{

class rubber_duck final : public duck
{
public:
    rubber_duck();

    virtual void display() const override;
};

} // namespace hfdp
