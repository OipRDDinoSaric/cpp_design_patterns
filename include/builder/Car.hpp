/**
 * @file
 *
 * @brief
 *
 * @copyright Copyright (C) 2021. Full licence notice is in the LICENCE file.
 */

#pragma once

#include <ostream>
#include <unordered_map>

namespace Builder
{
class CarBuilder;
}

namespace Builder
{
class Car
{
public:
    /*--- Structures ---*/
    enum class Color
    {
        Red = 0,
        Blue,
        Green
    };

    /*--- Constructors ---*/
    Car(const Car& other) = delete;
    Car& operator=(const Car& other) = delete;

    Car(Car&& other) = default;
    Car& operator=(Car&& other) = default;

    /*--- Methods ---*/
    static CarBuilder create();
    void goes(std::ostream& oStream);

private:
    /*--- Constructors ---*/
    Car() = default;

    /*--- Members ---*/
    static std::unordered_map<Builder::Car::Color, std::string> mapColorToName;
    Car::Color   color;
    std::uint8_t numberOfPassengers;
    std::string  ownerName;
    uint32_t     topSpeed;
    std::string  manufacturerName;
    std::string  modelName;

    /*--- Friends ---*/
    friend class CarBuilder;
};
}  // namespace Builder