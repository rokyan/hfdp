#pragma once

namespace hfdp
{
    class demo
    {
    public:
        virtual void run() const = 0;

        virtual ~demo() = default;
    };
}
