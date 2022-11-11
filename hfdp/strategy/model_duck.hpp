#pragma once

#include "duck.hpp"

namespace hfdp
{
    class model_duck final : public duck
    {
    public:
        model_duck();

        virtual void display() const override;
    };
}
