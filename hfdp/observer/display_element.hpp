#pragma once

namespace hfdp
{
    class display_element
    {
    public:
        virtual void display() const = 0;

        virtual ~display_element() = default;
    };
}