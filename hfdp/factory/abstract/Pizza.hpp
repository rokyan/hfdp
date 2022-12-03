#pragma once

#include "Dough.hpp"
#include "Sauce.hpp"
#include "Veggies.hpp"
#include "Cheese.hpp"
#include "Pepperoni.hpp"
#include "Clams.hpp"

#include <memory>
#include <vector>

namespace hfdp::abstract_factory
{

class Pizza
{
public:
    Pizza(const std::string& name);

    virtual void prepare() = 0;

    virtual void bake();
    virtual void cut();
    virtual void box();

    const std::string getName() const;

    virtual ~Pizza() = default;

protected:
    std::string name;

    std::unique_ptr<Dough> dough;
    std::unique_ptr<Sauce> sauce;
    std::vector<std::unique_ptr<Veggies>> veggies;
    std::unique_ptr<Cheese> cheese;
    std::unique_ptr<Pepperoni> pepperoni;
    std::unique_ptr<Clams> clams;
};

} // namespace hfdp::abstract_factory
