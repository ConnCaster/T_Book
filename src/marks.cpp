#include"marks.hpp"

Mark::Mark(char *name, std::vector<Instance>::iterator it) {
    strcpy(m_name, name);
    m_it=it;
}