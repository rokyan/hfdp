#pragma once

#include "Command.hpp"
#include "Hottub.hpp"

namespace hfdp::command
{

class HottubOffCommand final : public Command
{
public:
    HottubOffCommand(const Hottub& hottub);

    virtual void execute() override;

    virtual const std::string getName() const override;

private:
    Hottub hottub;
};

} // namespace hfdp::command
