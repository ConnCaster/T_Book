#include"marks.hpp"

Mark::Mark(char *mark_name, std::vector<Instance>::iterator it) {
    strcpy(m_name, mark_name);
    m_it=it;
}

int Marks_store::push(char* mark_name, std::vector<Instance>::iterator it) {
    if(exists(mark_name)) return 0;
    Mark mark = Mark(mark_name, it);
    m_marks.push_back(mark);
    return 1;
}

int Marks_store::exists(char * mark_name){
    for( const auto &mark:m_marks){
        if (!strcmp(mark_name, mark.m_name)) return 1;
    }
    return 0;
}


void Marks_store::remove(char *mark_name){
    for(int i=0; i<m_marks.size(); i++){
        if(strcmp(m_marks[i].m_name, mark_name) != 0){
            std::vector<Mark>::iterator it=m_marks.begin()+i;
            m_marks.erase(it);
        }
    }
}