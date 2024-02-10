#ifndef SENECA_CHILD_H
#define SENECA_CHILD_H

#include "Toy.h"
#include <string>

namespace seneca {

    class Child {
        std::string m_name;
        unsigned short m_age;
        const Toy** m_toys;
        size_t m_numToys;

    public:
        Child(std::string name, int age, const Toy* toys[], size_t count);
        Child(const Child& other); // Copy constructor
        Child& operator=(const Child& other); // Copy assignment operator
        Child(Child&& other) noexcept; // Move constructor
        Child& operator=(Child&& other) noexcept; // Move assignment operator
        ~Child();
        friend std::ostream& operator<<(std::ostream& os, const Child& child);
    };

} // namespace seneca

#endif //SENECA_CHILD_H