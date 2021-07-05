/**
 * @file
 *
 * @brief
 *
 * @copyright Copyright (C) 2021. Full licence notice is in the LICENCE file.
 */

#include "builder/CarBuilder.hpp"

#include <iostream>

int main()
{
    Builder::Car car {Builder::Car::create()
                          .color(Builder::Car::Color::Red)
                          .manufacturerName("Porsche")
                          .modelName("Panamera")
                          .numberOfPassengers(4)
                          .ownerName("John")
                          .topSpeedKiloMperH(310).build()};

    car.goes(std::cout);

    return 0;
}