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