#pragma once

#include "Demo.hpp"

namespace hfdp
{

class AdapterDemo final : public Demo
{
public:
    virtual void run() const override;
    virtual const std::string getName() const override;

private:
    void testTurkeyAdapter() const;
    void testDuckAdapter() const;
};

} // namespace hfdp
