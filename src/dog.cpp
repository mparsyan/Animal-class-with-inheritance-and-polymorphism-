#include <iostream>
#include "include/dog.h"

void Dog::toFeed()
{
    std::cout << "The dog eats meat\n";
}

void Dog::makeSound()
{
    std::cout << "The dog is barking\n";
}

void Dog::set_breed(std::string b)
{
    breed = b;
}

std::string Dog::get_breed()
{
    return breed;
}

void Dog::set_color(std::string c)
{
    color = c;
}

std::string Dog::get_color()
{
    return color;
}