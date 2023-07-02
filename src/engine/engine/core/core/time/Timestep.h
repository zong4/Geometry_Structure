#pragma once

namespace zong
{
namespace core
{

/**
 * \brief time step, use to fix update
 */
class Timestep
{
private:
    float _time;

public:
    explicit Timestep(float time = 0.0f) : _time(time) {}

    inline float time() const { return _time; }
    inline float seconds() const { return time(); }
    inline float milliseconds() const { return time() * 1000.0f; }

    // operator float() const { return _time; }
};

} // namespace core
} // namespace zong