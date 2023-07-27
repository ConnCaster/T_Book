#include"marks.hpp"

Mark::Mark(char *name, std::vector<Instance>::iterator it) {
    strcpy(m_name, name);
    m_it=it;
}

void Marks_store::push(char * name, std::vector<Instance>::iterator it) {
   Mark mark = Mark(name, it);
   m_marks.push_back(mark);
}

void Marks_store::push(char *name, Mark &mark){
    Mark new_mark = Mark(name, mark.m_it);
    m_marks.push_back(new_mark);
}

void Marks_store::remove(char *name){
    for(int i=0; i<m_marks.size(); i++){
        if(strcmp(m_marks[i].m_name, name) != 0){
            std::vector<Mark>::iterator it=m_marks.begin()+i;
            m_marks.erase(it);
        }
    }
}