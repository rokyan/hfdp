#pragma once

#include <string>

namespace hfdp
{

class Stereo
{
public:
    Stereo(const std::string& location);

    void on();
    void off();
    void setCD();
    void setDVD();
    void setRadio();
    void setVolume(int volume);

private:
    std::string location;
};

} // namespace hfdp
