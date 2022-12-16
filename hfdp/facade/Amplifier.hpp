#pragma once

#include "Appliance.hpp"
#include "Tuner.hpp"
#include "StreamingPlayer.hpp"

#include <string>

namespace hfdp::facade
{

class Amplifier final : public Appliance
{
public:
    Amplifier(const std::string& description);

    void on();
    void off();

    void setStereoSound();
    void setSurroundSound();
    void setVolume(int level);
    void setTuner(const Tuner& tuner);
    void setStreamingPlayer(const StreamingPlayer& player);

private:
    Tuner tuner;
    StreamingPlayer player;
};

} // namespace hfdp::facade
