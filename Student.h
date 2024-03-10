using namespace std;
class Student{
private:
    string name;
    int age;
    static int studentNumber;
public:
    Student(string name , int age): name(name) , age(age) {
         studentNumber++;
    }
    void displayStudent() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Student Number: " << studentNumber << std::endl;
    }
    static int getStudentNumber() {
        return studentNumber;
    }
    string getName(){
        return name;
    }
};
