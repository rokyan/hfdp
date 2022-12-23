#pragma once

namespace hfdp::iterator
{

template<typename T>
class Iterator
{
public:
    virtual const T& next() = 0;
    virtual bool hasNext() const = 0;

    virtual ~Iterator() = default;
};

} // namespace hfdp::iterator
