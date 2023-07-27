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

int T_Book::set_mark (char *mark_name){
    if(!marks_store.push(mark_name, m_curr)) return 0;
    return 1;
}