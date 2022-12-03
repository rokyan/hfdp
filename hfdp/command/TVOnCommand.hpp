#pragma once

#include "Command.hpp"
#include "TV.hpp"

namespace hfdp::command
{

class TVOnCommand final : public Command
{
public:
    TVOnCommand(const TV& tv);

    virtual void execute() override;

    virtual const std::string getName() const override;

private:
    TV tv;
};

} // namespace hfdp::command
