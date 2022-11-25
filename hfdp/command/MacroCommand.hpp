#pragma once

#include "Command.hpp"

#include <vector>
#include <memory>

namespace hfdp
{

class MacroCommand final : public Command
{
public:
    MacroCommand(std::vector<std::unique_ptr<Command>>&& commands);

    MacroCommand(const MacroCommand&) = delete;
    MacroCommand& operator=(const MacroCommand&) = delete;

    MacroCommand(MacroCommand&&) = default;
    MacroCommand& operator=(MacroCommand&&) = default;

    virtual void execute() override;

    virtual const std::string getName() const override;

private:
    std::vector<std::unique_ptr<Command>> commands;
};

} // namespace hfdp
