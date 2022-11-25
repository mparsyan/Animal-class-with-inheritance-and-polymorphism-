#ifndef __CAT_H__
#define __CAT_H__

#include "animal.h"

class Cat : public Animal
{
private:
    std::string breed;
    std::string color;

public:
    Cat(std::string name)
    : Animal(name)
    , breed("NoName")
    , color("NoColor")
    {}
    void toFeed() override;
    void makeSound() override;
    void set_breed(std::string);
    std::string get_breed();
    void set_color(std::string);
    std::string get_color();
};

#endif /*__CAT_H__*/