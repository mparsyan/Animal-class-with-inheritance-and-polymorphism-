#include "include/dog.h"
#include "include/cat.h"
#include <iostream>

int main ()
{
    Dog d("Graf");
    d.set_breed("Labrador");
    d.set_color("Black");
    d.set_id(1234);

    std::cout << "The name of dog is " << d.get_name() << '\n';
    std::cout <<  "The breed of dog is " << d.get_breed() << '\n';
    std::cout <<  "The color of dog is " << d.get_color() << '\n';
    std::cout <<  "The id of dog is " << d.get_id() << '\n';
    d.toFeed();
    d.makeSound();
    std::cout << "===============================\n";
    Cat c("Kitty");
    c.set_breed("Balinese");
    c.set_color("White");
    c.set_id(5678);

    std::cout << "The name of cat is " << c.get_name() << '\n';
    std::cout <<  "The breed of cat is " << c.get_breed() << '\n';
    std::cout <<  "The color of cat is " << c.get_color() << '\n';
    std::cout <<  "The id of cat is " << c.get_id() << '\n';
    c.toFeed();
    c.makeSound();

    return 0;
}