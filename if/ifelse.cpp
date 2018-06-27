#include <iostream>
#include <string>
#include <vector>

using namespace::std;

string getLettergrade(int grade){
    const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
    string lettergrade;

    if (grade < 60){
        lettergrade = scores[0];
    }else{
        lettergrade = scores[(grade-50)/10];
        if (grade != 100){
            if (grade % 10 > 7)
                lettergrade += "+";
            else if (grade % 10 < 3)
                lettergrade += "-";
        }
    }

    return lettergrade;
}


int main(){
    int grade;
    string vals;
    grade = 49;
    vals = getLettergrade(grade);
    cout << grade << " " << vals << endl;

    grade = 82;
    vals = getLettergrade(grade);
    cout << grade << " " << vals << endl;
    
    grade = 100;
    vals = getLettergrade(grade);
    cout << grade << " " << vals << endl;
   
    grade = 88;
    vals = getLettergrade(grade);
    cout << grade << " " << vals << endl;
    
    return 0;
}
