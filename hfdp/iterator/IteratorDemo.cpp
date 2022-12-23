#include "IteratorDemo.hpp"
#include "DinerMenu.hpp"
#include "CafeMenu.hpp"
#include "PancakeHouseMenu.hpp"
#include "Waitress.hpp"

#include <memory>
#include <utility>

namespace hfdp
{

void IteratorDemo::run() const
{
    using namespace iterator;

    std::unique_ptr<Menu> pancakeHouseMenu = std::make_unique<PancakeHouseMenu>();
    std::unique_ptr<Menu> cafeMenu = std::make_unique<CafeMenu>();
    std::unique_ptr<Menu> dinerMenu = std::make_unique<DinerMenu>();

    Waitress waitress(std::move(pancakeHouseMenu), std::move(cafeMenu), std::move(dinerMenu));

    waitress.printMenu();
}

const std::string IteratorDemo::getName() const
{
    return "Iterator";
}

} // namespace hfdp