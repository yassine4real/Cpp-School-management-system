using namespace std;
class School{
    public:
    vector<Student> list_student;
    void addStudent(Student& s){
        list_student.push_back(s);
    }
    void displayAllStudent(){
        cout << "students : \n" << endl;
        for(Student s : list_student){
            s.displayStudent();
        }
    }
    int SearchStudentByName(string name_student){
        for(int i = 0 ; i < list_student.size() ; i++){
            if(list_student[i].getName().find(name_student) != string::npos )
                return i;
        }
        return -1;
    }
};
