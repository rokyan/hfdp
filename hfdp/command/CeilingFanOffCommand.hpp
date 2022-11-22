#pragma once

#include "Command.hpp"
#include "CeilingFan.hpp"

namespace hfdp
{

class CeilingFanOffCommand final : public Command
{
public:
    CeilingFanOffCommand(const CeilingFan& ceilingFan);

    virtual void execute() override;

    virtual const std::string getName() const override;

private:
    CeilingFan ceilingFan;
};

} // namespace hfdp
