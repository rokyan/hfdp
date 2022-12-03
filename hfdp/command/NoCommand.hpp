#pragma once

#include "Command.hpp"

namespace hfdp::command
{

class NoCommand final : public Command
{
public:
    virtual void execute() override;

    virtual const std::string getName() const override;
};

} // namespace hfdp::command
