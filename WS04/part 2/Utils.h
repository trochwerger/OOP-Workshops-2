// Name: Tomas Rochwerger
// Student Number: 159432210
// Seneca Email: trochwerger@myseneca.ca
// Date of Completion: 2024-02-09
// I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.


#ifndef SENECA_UTILS_H
#define SENECA_UTILS_H
#include <iostream>

namespace seneca {

    class Utils {
    public:
        // print a line of characters using ostream
        static std::ostream &printLine(std::ostream &os, int width = 26, char fill = '-');
    };

} // seneca

#endif //SENECA_UTILS_H
