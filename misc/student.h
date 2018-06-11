#ifndef _STUDENT_H_
#define _STUDENT_H_

class Student{
    public:
        explicit Student(int id=0);
        ~Student();

        inline int getId(){
            return m_id;
        };
        void setId(int Id){
            m_id = Id;
        };
        int getScore(){
            return m_score;
        };
        void setScore(int score){
            m_score = score;
        };

    private:
        int m_id;
        int m_score;

};

#endif
