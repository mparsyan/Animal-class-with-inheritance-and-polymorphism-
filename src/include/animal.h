#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <string>

class Animal
{
    public:
        Animal(std::string name) 
        : m_name {name}
        , m_id{0}
        {}
        virtual void toFeed() = 0;
        virtual void makeSound() = 0;

        void set_name(std::string n) 
        {
            m_name = n;
        }
        std::string get_name() 
        {
            return m_name;
        }

        void set_id(int i) 
        {
            m_id = i;
        }
        int get_id() 
        {
            return m_id;
        }

    // Քանի որ այս փոփոխականները հնարավոր է օգտագործվեն նաև ժառանգ ֆունկցիաներում,
    // ճիշտ կլինի նրանց հայտարարել protected
    private:
       std::string m_name;
       int m_id;
};


#endif /*__ANIMAL_H__*/
