#pragma once

namespace hfdp::observer
{

class DisplayElement
{
public:
    virtual void display() const = 0;

    virtual ~DisplayElement() = default;
};

} // namespace hfdp::observer