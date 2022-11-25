#pragma once

namespace hfdp
{

class Hottub
{
public:
    Hottub();

    void on();
    void off();

private:
    bool isOn;
};

} // namespace hfdp
