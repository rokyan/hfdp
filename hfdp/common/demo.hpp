#pragma once

#include <string>

namespace hfdp
{
    class Demo
    {
    public:
        virtual void run() const = 0;

        virtual const std::string getName() const = 0;

        virtual ~Demo() = default;
    };
}
