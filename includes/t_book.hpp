#pragma once

#include <iostream>
#include <cstring>
#include <vector>

struct Instance{
public:
    char m_telefon[12];
    char m_name [128];
public:
    Instance(char *telefon, char *name);
};

struct T_Book{
public:
    std::vector<Instance> m_book;
    std::vector<Instance>::iterator m_curr;

public:
    T_Book() = default;

    void append(char *name, char *telefon);

    void append(const Instance& instance);
};



