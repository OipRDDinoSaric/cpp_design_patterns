/**
 * @file
 *
 * @brief
 *
 * @copyright Copyright (C) 2021. Full licence notice is in the LICENCE file.
 */

#include "builder/Car.hpp"

#include "builder/CarBuilder.hpp"

std::unordered_map<Builder::Car::Color, std::string> Builder::Car::mapColorToName {
    {Color::Red, "Red"},
    {Color::Blue, "Blue"},
    {Color::Green, "Green"}};

Builder::CarBuilder Builder::Car::create()
{
    return Builder::CarBuilder{};
}

void Builder::Car::goes(std::ostream& oStream)
{
    oStream << "Manufacturer: " << manufacturerName << '\n';
    oStream << "Model: " << modelName << '\n';
    oStream << "Top speed (km/h): " << topSpeed << '\n';
    oStream << "Owner: " << ownerName << '\n';
    oStream << "Number of passengers: " << static_cast<std::uint32_t>(numberOfPassengers) << '\n';
    oStream << "Color: " << mapColorToName[color] << '\n';
}