#pragma once

#include "Demo.hpp"

namespace hfdp
{
    class SingletonDemo final : public Demo
    {
    public:
        virtual void run() const override;
    };

} // namespace hfdp
