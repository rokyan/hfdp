#pragma once

#include "Appliance.hpp"

#include <string>

namespace hfdp::facade
{

class CdPlayer final : public Appliance
{
public:
    CdPlayer(const std::string& description);

    void on();
    void off();

    void eject();

    void play(const std::string& title);
    void play(int track);

    void stop();

    void pause();

private:
    std::string title;
    int track;
};

} // hfdp::facade
