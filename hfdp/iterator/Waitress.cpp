#include "Waitress.hpp"

#include <iostream>

namespace hfdp::iterator
{

Waitress::Waitress(std::unique_ptr<Menu> pancakeHouseMenu, std::unique_ptr<Menu> dinerMenu, std::unique_ptr<Menu> cafeMenu)
    : pancakeHouseMenu(std::move(pancakeHouseMenu))
    , dinerMenu(std::move(dinerMenu))
    , cafeMenu(std::move(cafeMenu))
{}

void Waitress::printMenu() const
{
    std::cout << "Breakfast:" << std::endl;
    auto pancakeHouseMenuIterator = pancakeHouseMenu->createIterator();
    printMenu(pancakeHouseMenuIterator);

    std::cout << "Lunch:" << std::endl;
    auto dinerMenuIterator = dinerMenu->createIterator();
    printMenu(dinerMenuIterator);

    std::cout << "Dinner:" << std::endl;
    auto cafeMenuIterator = cafeMenu->createIterator();
    printMenu(cafeMenuIterator);
}

void Waitress::printMenu(const std::unique_ptr<Iterator<MenuItem>>& iterator) const
{
    if (iterator != nullptr)
    {
        while (iterator->hasNext())
        {
            const auto& item = iterator->next();

            std::cout << item.getName() << ", " << item.getPrice() << " -- " << item.getDescription() <<
                ". Vegetarian option: " << std::boolalpha << item.isVegetarian() << std::endl;
        }

        std::cout << std::endl;
    }
}

} // namespace hfdp::iterator