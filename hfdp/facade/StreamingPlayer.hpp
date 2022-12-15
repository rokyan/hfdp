#pragma once

#include "Appliance.hpp"

#include <string>

namespace hfdp::facade
{

class StreamingPlayer final : public Appliance
{
public:
    StreamingPlayer(const std::string& description);

    void on();
    void off();

    void play(const std::string& movie);
    void play(int chapter);
    void stop();
    void pause();

    void setTwoChannelAudio();
    void setSurroundAudio();

private:
    std::string movie;
    int chapter;
};

} // namespace hfdp::facade
