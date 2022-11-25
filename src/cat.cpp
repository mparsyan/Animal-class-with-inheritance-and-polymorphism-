#include <iostream>
#include "include/cat.h"

void Cat::toFeed()
{
    std::cout << "A cat eats a mouse\n";
}

void Cat::makeSound()
{
    std::cout << "The cat is meowing\n";
}

void Cat::set_breed(std::string b)
{
    breed = b;
}

std::string Cat::get_breed()
{
    return breed;
}

void Cat::set_color(std::string c)
{
    color = c;
}

std::string Cat::get_color()
{
    return color;
}