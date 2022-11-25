#pragma once

#include "Duck.hpp"

namespace hfdp::strategy
{

class ModelDuck final : public Duck
{
public:
    ModelDuck();

    ModelDuck(const ModelDuck& other) = delete;
    ModelDuck& operator=(const ModelDuck& other) = delete;

    ModelDuck(ModelDuck&& other) = delete;
    ModelDuck& operator=(ModelDuck&& other) = delete;

    virtual void display() const override;
};

} // namespace hfdp::strategy
