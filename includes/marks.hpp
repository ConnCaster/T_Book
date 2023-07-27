#pragma once

#include "instance.hpp"

struct Mark{
public:
    char m_name[128];
    std::vector<Instance>::iterator m_it;
public:
    Mark(char *name, std::vector<Instance>::iterator it);
};

struct Marks_store{
public:
    std::vector<Mark> m_marks;
public:
    Marks_store()=default;

    int push(char * name, std::vector<Instance>::iterator it);

    int exists(char * mark_name);

    void remove(char *name);
};