#pragma once

#include "marks.hpp"

struct T_Book{
public:
    std::vector<Instance> m_book;
    std::vector<Instance>::iterator m_curr;
    Marks_store marks_store;

public:
    T_Book() = default;

    void append(char *name, char *telefon);

    void append(const Instance& instance);

    void remove (char *mark_name){};

    int set_mark (char *mark_name);
};



