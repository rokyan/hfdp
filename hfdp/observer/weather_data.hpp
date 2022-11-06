#pragma once

#include "subject.hpp"
#include "observer.hpp"
#include <vector>
#include <memory>

namespace hfdp
{
    class weather_data : public subject
    {
    public:
        weather_data()
            : temperature(.0)
            , humidity(.0)
            , pressure(.0)
        {}

        virtual void register_observer(observer* observer)
        {
            observers.push_back(observer);
        }

        virtual void remove_observer(observer* observer)
        {
            const auto it = std::find(std::begin(observers), std::end(observers), observer);

            if (it != std::end(observers))
            {
                observers.erase(it);
            }
        }

        virtual void notify_observers()
        {
            for (const auto& observer : observers)
            {
                observer->update(temperature, humidity, pressure);
            }
        }

        void measurements_changed()
        {
            notify_observers();
        }

        void set_measurements(double temperature, double humidity, double pressure)
        {
            this->temperature = temperature;
            this->humidity = humidity;
            this->pressure = pressure;

            measurements_changed();
        }

    private:
        std::vector<observer*> observers;

        double temperature;
        double humidity;
        double pressure;
    };
}