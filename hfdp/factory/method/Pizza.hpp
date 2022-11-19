#pragma once

#include <string>
#include <vector>

namespace hfdp
{

class Pizza
{
public:
    Pizza(const std::string& name, const std::string& dough, const std::string& sauce, const std::vector<std::string>& toppings);

    void prepare();

    virtual void bake();
    virtual void cut();
    virtual void box();

    const std::string getName() const;

private:
    std::string name;
    std::string dough;
    std::string sauce;
    std::vector<std::string> toppings;
};

} // namespace hfdp
