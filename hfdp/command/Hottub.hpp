#pragma once

namespace hfdp::command
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

} // namespace hfdp::command
