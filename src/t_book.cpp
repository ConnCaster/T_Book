#include "t_book.hpp"

Instance::Instance(char *telefon, char *name) {
    strcpy(m_telefon, telefon);
    strcpy(m_name, name);
}

void T_Book::append(char *name, char *telefon){
    m_book.emplace_back(telefon, name);
    m_curr=m_book.end()-1;
}

void T_Book::append(const Instance& instance){
    m_book.push_back(instance);
    m_curr=m_book.end()-1;
}