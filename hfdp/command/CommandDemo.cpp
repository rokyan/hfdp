#include "CommandDemo.hpp"
#include "Command.hpp"
#include "RemoteControl.hpp"
#include "Light.hpp"
#include "CeilingFan.hpp"
#include "Stereo.hpp"
#include "LightOnCommand.hpp"
#include "LightOffCommand.hpp"
#include "CeilingFanOnCommand.hpp"
#include "CeilingFanOffCommand.hpp"
#include "StereoOnWithCDCommand.hpp"
#include "StereoOffCommand.hpp"

#include <memory>
#include <utility>
#include <iostream>

namespace hfdp
{

void CommandDemo::run() const
{
    RemoteControl remoteControl;

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
}

} // namespace hfdp