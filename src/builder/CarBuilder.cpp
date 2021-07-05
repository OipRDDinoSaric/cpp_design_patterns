/**
 * @file
 *
 * @brief
 *
 * @copyright Copyright (C) 2021. Full licence notice is in the LICENCE file.
 */

#include "builder/CarBuilder.hpp"

#include <utility>

Builder::CarBuilder::CarBuilder() : car {}
{}

Builder::CarBuilder& Builder::CarBuilder::color(Car::Color newColor)
{
    car.color = newColor;
    return *this;
}

Builder::CarBuilder& Builder::CarBuilder::numberOfPassengers(std::uint8_t newNumberOfPassengers)
{
    car.numberOfPassengers = newNumberOfPassengers;
    return *this;
}

Builder::CarBuilder& Builder::CarBuilder::ownerName(std::string newOwnerName)
{
    car.ownerName = newOwnerName;
    return *this;
}

Builder::CarBuilder& Builder::CarBuilder::topSpeedKiloMperH(uint32_t newTopSpeed)
{
    car.topSpeed = newTopSpeed;
    return *this;
}

Builder::CarBuilder& Builder::CarBuilder::manufacturerName(std::string newName)
{
    car.manufacturerName = newName;
    return *this;
}

Builder::CarBuilder& Builder::CarBuilder::modelName(std::string newName)
{
    car.modelName = newName;
    return *this;
}

Builder::Car Builder::CarBuilder::build()
{
    return std::move(car);
}