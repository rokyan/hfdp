#include "CommandDemo.hpp"
#include "Command.hpp"
#include "MacroCommand.hpp"
#include "RemoteControl.hpp"
#include "Light.hpp"
#include "CeilingFan.hpp"
#include "Stereo.hpp"
#include "Hottub.hpp"
#include "TV.hpp"
#include "LightOnCommand.hpp"
#include "LightOffCommand.hpp"
#include "CeilingFanOnCommand.hpp"
#include "CeilingFanOffCommand.hpp"
#include "StereoOnCommand.hpp"
#include "StereoOnWithCDCommand.hpp"
#include "StereoOffCommand.hpp"
#include "TVOnCommand.hpp"
#include "TVOffCommand.hpp"
#include "HottubOnCommand.hpp"
#include "HottubOffCommand.hpp"

#include <memory>
#include <utility>
#include <iostream>

namespace hfdp
{

void CommandDemo::run() const
{
    testPlainCommand();
    testMacroCommand();
}

void CommandDemo::testPlainCommand() const
{
    using namespace command;

    std::cout << "### Testing a plain command ###\n" << std::endl;

    Light livingRoomLight("Living Room");
    Light kitchenLight("Kitchen");
    CeilingFan ceilingFan("Living Room");
    Stereo stereo("Living Room");

    std::unique_ptr<Command> livingRoomLightOn = std::make_unique<LightOnCommand>(livingRoomLight);
    std::unique_ptr<Command> livingRoomLightOff = std::make_unique<LightOffCommand>(livingRoomLight);

    std::unique_ptr<Command> kitchenLightOn = std::make_unique<LightOnCommand>(kitchenLight);
    std::unique_ptr<Command> kitchenLightOff = std::make_unique<LightOffCommand>(kitchenLight);

    std::unique_ptr<Command> ceilingFanOn = std::make_unique<CeilingFanOnCommand>(ceilingFan);
    std::unique_ptr<Command> ceilingFanOff = std::make_unique<CeilingFanOffCommand>(ceilingFan);

    std::unique_ptr<Command> stereoOnWithCD = std::make_unique<StereoOnWithCDCommand>(stereo);
    std::unique_ptr<Command> stereoOff = std::make_unique<StereoOffCommand>(stereo);

    RemoteControl remoteControl;

    remoteControl.setCommand(0, std::move(livingRoomLightOn), std::move(livingRoomLightOff));
    remoteControl.setCommand(1, std::move(kitchenLightOn), std::move(kitchenLightOff));
    remoteControl.setCommand(2, std::move(ceilingFanOn), std::move(ceilingFanOff));
    remoteControl.setCommand(3, std::move(stereoOnWithCD), std::move(stereoOff));

    std::cout << remoteControl << std::endl;

    remoteControl.onButtonWasPushed(0);
    remoteControl.offButtonWasPushed(0);
    remoteControl.onButtonWasPushed(1);
    remoteControl.offButtonWasPushed(1);
    remoteControl.onButtonWasPushed(2);
    remoteControl.offButtonWasPushed(2);
    remoteControl.onButtonWasPushed(3);
    remoteControl.offButtonWasPushed(3);

    std::cout << std::endl;
}

void CommandDemo::testMacroCommand() const
{
    using namespace command;

    std::cout << "### Testing a macro command ###\n" << std::endl;

    Light light("Living Room");
    Stereo stereo("Living Room");
    TV tv("Living Room");
    Hottub hottub;

    std::unique_ptr<Command> lightOn = std::make_unique<LightOnCommand>(light);
    std::unique_ptr<Command> lightOff = std::make_unique<LightOffCommand>(light);

    std::unique_ptr<Command> stereoOn = std::make_unique<StereoOnCommand>(stereo);
    std::unique_ptr<Command> stereoOff = std::make_unique<StereoOffCommand>(stereo);

    std::unique_ptr<Command> tvOn = std::make_unique<TVOnCommand>(tv);
    std::unique_ptr<Command> tvOff = std::make_unique<TVOffCommand>(tv);

    std::unique_ptr<Command> hottubOn = std::make_unique<HottubOnCommand>(hottub);
    std::unique_ptr<Command> hottubOff = std::make_unique<HottubOffCommand>(hottub);

    std::vector<std::unique_ptr<Command>> onCommands;
    onCommands.push_back(std::move(lightOn));
    onCommands.push_back(std::move(stereoOn));
    onCommands.push_back(std::move(tvOn));
    onCommands.push_back(std::move(hottubOn));

    std::unique_ptr<Command> partyOn = std::make_unique<MacroCommand>(std::move(onCommands));

    std::vector<std::unique_ptr<Command>> offCommands;

    offCommands.push_back(std::move(lightOff));
    offCommands.push_back(std::move(stereoOff));
    offCommands.push_back(std::move(tvOff));
    offCommands.push_back(std::move(hottubOff));

    std::unique_ptr<Command> partyOff = std::make_unique<MacroCommand>(std::move(offCommands));

    RemoteControl remoteControl;

    remoteControl.setCommand(0, std::move(partyOn), std::move(partyOff));

    std::cout << remoteControl << std::endl;

    remoteControl.onButtonWasPushed(0);
    remoteControl.offButtonWasPushed(0);

    std::cout << std::endl;
}

const std::string CommandDemo::getName() const
{
    return "Command";
}

} // namespace hfdp