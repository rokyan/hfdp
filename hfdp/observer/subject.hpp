#pragma once

#include "observer.hpp"
#include <memory>

namespace hfdp
{
    class subject
    {
    public:
        virtual void register_observer(const std::shared_ptr<observer>&) = 0;
        virtual void remove_observer(const std::shared_ptr<observer>&) = 0;
        virtual void notify_observers() = 0;

        virtual ~subject() = default;
    };
}