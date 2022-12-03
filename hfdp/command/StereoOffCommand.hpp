#pragma once

#include "Command.hpp"
#include "Stereo.hpp"

namespace hfdp::command
{

class StereoOffCommand final : public Command
{
public:
    StereoOffCommand(const Stereo& stereo);

    virtual void execute() override;

    virtual const std::string getName() const override;

private:
    Stereo stereo;
};

} // namespace hfdp::command
