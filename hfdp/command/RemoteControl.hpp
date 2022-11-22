#pragma once

#include "Command.hpp"

#include <vector>
#include <memory>
#include <ostream>

namespace hfdp
{

class RemoteControl final
{
private:
    static constexpr std::size_t SLOTS_NUMBER = 7;

public:
    RemoteControl();

    RemoteControl(const RemoteControl&) = delete;
    RemoteControl& operator=(const RemoteControl&) = delete;

    RemoteControl(RemoteControl&&) = default;
    RemoteControl& operator=(RemoteControl&) = default;

    void setCommand(std::size_t slot, std::unique_ptr<Command> onCommand, std::unique_ptr<Command> offCommand);

    void onButtonWasPushed(std::size_t slot);
    void offButtonWasPushed(std::size_t slot);

    friend std::ostream& operator<<(std::ostream& os, const RemoteControl& remoteControl);

private:
    std::vector<std::unique_ptr<Command>> onCommands;
    std::vector<std::unique_ptr<Command>> offCommands;
};

} // namespace hfdp
