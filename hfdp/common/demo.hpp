#pragma once

namespace hfdp
{
    class Demo
    {
    public:
        virtual void run() const = 0;

        virtual ~Demo() = default;
    };
}
