#pragma once

#include "Command.hpp"
#include "CeilingFan.hpp"

namespace hfdp::command
{

class CeilingFanOnCommand final : public Command
{
public:
    CeilingFanOnCommand(const CeilingFan& ceilingFan);

    virtual void execute() override;

    virtual const std::string getName() const override;

private:
    CeilingFan ceilingFan;
};

} // namespace hfdp::command
