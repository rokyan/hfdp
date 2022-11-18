#pragma once

namespace hfdp
{

class Command
{
public:
    virtual void execute() = 0;

    virtual ~Command() = default;
};

} // namespace hfdp
