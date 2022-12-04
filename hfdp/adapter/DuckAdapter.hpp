#pragma once

#include "Duck.hpp"
#include "Turkey.hpp"

#include <memory>

namespace hfdp::adapter
{

class DuckAdapter final : public Turkey
{
public:
    DuckAdapter(std::unique_ptr<Duck> duck);

    DuckAdapter(const DuckAdapter&) = delete;
    DuckAdapter& operator=(const DuckAdapter&) = delete;

    DuckAdapter(DuckAdapter&&) = default;
    DuckAdapter& operator=(DuckAdapter&&) = default;

    virtual void gobble() override;
    virtual void fly() override;

private:
    int times;
    std::unique_ptr<Duck> duck;
};

} // namespace hfdp::adapter
