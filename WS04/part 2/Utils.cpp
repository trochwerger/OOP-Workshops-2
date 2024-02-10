// Name: Tomas Rochwerger
// Student Number: 159432210
// Seneca Email: trochwerger@myseneca.ca
// Date of Completion: 2024-02-09
// I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#include "Utils.h"

namespace seneca {
    // print a line of characters using ostream
    std::ostream &Utils::printLine(std::ostream &os, int width, char fill) {
        std::string line(width, fill);
        line += '\n';
        os << line;
        return os;
    }
} // seneca