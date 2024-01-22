#ifndef SENECA_EVENT_H
#define SENECA_EVENT_H
#include <iostream>
namespace seneca {
    extern size_t g_sysClock;
    class Event {
//        Part 1:
//        char description[128]{};
        char* m_desc{};
        size_t m_time{};
    public:
        Event() = default;
        Event(const Event& src);
        ~Event();
        void display();
        void set(const char* desc = nullptr);
        Event& operator=(const Event& src);
    };
} // seneca

#endif //SENECA_EVENT_H
