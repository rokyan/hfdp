#pragma once

#include <string>

namespace hfdp::command
{

class Command
{
public:
    virtual void execute() = 0;

    virtual const std::string getName() const = 0;

    virtual ~Command() = default;
};

} // namespace hfdp::command
