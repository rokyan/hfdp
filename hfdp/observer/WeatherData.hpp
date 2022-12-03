#pragma once

#include "Subject.hpp"
#include "Observer.hpp"

#include <vector>

namespace hfdp::observer
{

class WeatherData final : public Subject
{
public:
    WeatherData();

    virtual void registerObserver(Observer* observer) override;

    virtual void removeObserver(Observer* observer) override;

    virtual void notifyObservers() override;

    void measurementsChanged();

    void setMeasurements(double temperature, double humidity, double pressure);

private:
    std::vector<Observer*> observers;

    double temperature;
    double humidity;
    double pressure;
};

} // namespace hfdp::observer