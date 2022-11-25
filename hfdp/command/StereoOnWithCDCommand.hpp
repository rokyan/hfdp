#pragma once

#include "Command.hpp"
#include "Stereo.hpp"

namespace hfdp::command
{

class StereoOnWithCDCommand final : public Command
{
public:
    StereoOnWithCDCommand(const Stereo& stereo);

    virtual void execute() override;

    virtual const std::string getName() const override;

private:
    Stereo stereo;
};

} // namespace hfdp::command
