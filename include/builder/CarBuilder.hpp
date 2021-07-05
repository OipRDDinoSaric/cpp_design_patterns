/**
 * @file
 *
 * @brief
 *
 * @copyright Copyright (C) 2021. Full licence notice is in the LICENCE file.
 */

#pragma once

#include "builder/Car.hpp"

#include <cstdint>
#include <string>

namespace Builder
{
class CarBuilder
{
public:
    /*--- Constructors ---*/
    CarBuilder(const CarBuilder& other) = delete;
    CarBuilder& operator=(const CarBuilder& other) = delete;

    CarBuilder();

    /*--- Methods ---*/
    Builder::CarBuilder& color(Car::Color newColor);
    Builder::CarBuilder& numberOfPassengers(std::uint8_t newNumberOfPassengers);
    Builder::CarBuilder& ownerName(std::string newOwnerName);
    Builder::CarBuilder& topSpeedKiloMperH(uint32_t newTopSpeed);
    Builder::CarBuilder& manufacturerName(std::string newName);
    Builder::CarBuilder& modelName(std::string newName);

    Car build();

private:
    Car car;
};
}  // namespace Builder