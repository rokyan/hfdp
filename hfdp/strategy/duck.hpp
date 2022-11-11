#pragma once

#include "fly_behavior.hpp"
#include "quack_behavior.hpp"

#include <memory>

namespace hfdp
{

class duck
{
public:
    duck(std::unique_ptr<fly_behavior> _fly_behavior, std::unique_ptr<quack_behavior> _quack_behavior);

    duck(const duck&) = delete;
    duck& operator=(const duck&) = delete;

    void perform_fly() const;

    void perform_quack() const;

    void swim() const;

    virtual void display() const = 0;

    void set_fly_behavior(std::unique_ptr<fly_behavior> _fly_behavior);

    void set_quack_behavior(std::unique_ptr<quack_behavior> _quack_behavior);

    virtual ~duck() = default;

private:
    std::unique_ptr<fly_behavior> _fly_behavior;
    std::unique_ptr<quack_behavior> _quack_behavior;
};

} // namespace hfdp
