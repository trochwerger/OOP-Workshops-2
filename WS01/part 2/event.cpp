#define CRT_SECURE_NO_WARNINGS
#include "event.h"
#include <iostream>
#include <iomanip>
#include <cstring>

namespace seneca{
    size_t g_sysClock = 0u;
    Event::~Event() {
        delete[] m_desc;
    }
    Event::Event(const Event& src){
        set(src.m_desc);
    }
    void Event::display(){
        static int counter = 1;
        std::cout << std::setw(2) << std::setfill(' ') << counter << ". ";
        if (m_desc == nullptr) {
            std::cout << "| No Event |" << std::endl;
        } else {
            size_t hours = m_time / 3600;
            size_t minutes = (m_time % 3600) / 60;
            size_t secs = m_time % 60;

            std::cout << std::setw(2) << std::setfill('0') << (hours) << ":"
                         << std::setw(2) << std::setfill('0') << (minutes) << ":"
                         << std::setw(2) << std::setfill('0') << (secs);
            std::cout << " => " << m_desc << std::endl;
        }
        ++counter;
    }
    void Event::set(const char *desc){
//        delete[] m_desc;
        if (desc == nullptr) {
            m_desc = nullptr;
        } else {
            m_desc = new char[strlen(desc) + 1];
            strcpy(m_desc, desc);
        m_time = g_sysClock;
        }
    }

    Event &Event::operator=(const Event &src) {
        if (this != &src) {
            delete[] m_desc;
            set(src.m_desc);
        }
        return *this;
    }

}