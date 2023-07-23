#pragma once
#include "t_book.hpp"
struct Mark{
public:
    char m_name[128];
    std::vector<Instance>::iterator m_it;
public:
    Mark(char *name, std::vector<Instance>::iterator it);
};

struct Marks_store{
public:
    std::vector<Mark> marks;
public:
    Marks_store()=default;
};