#pragma once

#include "Demo.hpp"

namespace hfdp
{

class CommandDemo final : public Demo
{
public:
    virtual void run() const override;

    virtual const std::string getName() const override;

private:
    void testPlainCommand() const;
    void testMacroCommand() const;
};

} // namespace hfdp::command
