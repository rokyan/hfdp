#include "PancakeHouseMenu.hpp"
#include "PancakeHouseMenuIterator.hpp"

namespace hfdp::iterator
{

PancakeHouseMenu::PancakeHouseMenu()
{
    addItem("K&B's Pancake Breakfast", "Pancakes with scrambled eggs and toast", true, 2.99);
	addItem("Regular Pancake Breakfast", "Pancakes with fried eggs, sausage", false, 2.99);
	addItem("Blueberry Pancakes", "Pancakes made with fresh blueberries and blueberry syrup", true, 3.49);
	addItem("Waffles", "Waffles with your choice of blueberries or strawberries", true, 3.59);
}

void PancakeHouseMenu::addItem(const std::string& name, const std::string& description, bool vegetarian, double price)
{
    items.emplace_back(name, description, vegetarian, price);
}

std::unique_ptr<Iterator<MenuItem>> PancakeHouseMenu::createIterator() const
{
    return std::make_unique<PancakeHouseMenuIterator>(items);
}

} // namespace hfdp::iterator