#include "Amplifier.hpp"

namespace hfdp::facade
{

Amplifier::Amplifier(const std::string& description)
    : Appliance(description)
    , tuner(description)
    , player(description)
{}

void Amplifier::on()
{
    print("on");
}

void Amplifier::off()
{
    print("off");
}

void Amplifier::setStereoSound()
{
    print("stereo mode on");
}

void Amplifier::setSurroundSound()
{
    print("surround sound on (5 speakers, 1 subwoofer)");
}

void Amplifier::setVolume(int level)
{
    print("setting volume to", level);
}

void Amplifier::setTuner(const Tuner& tuner)
{
    print("set tuner");

    this->tuner = tuner;
}

void Amplifier::setStreamingPlayer(const StreamingPlayer& player)
{
    print("set streaming player");

    this->player = player;
}

} // namespace hfdp::facade