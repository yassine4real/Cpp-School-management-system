#include <iostream>
#include <vector>
#include "Student.h"
#include "School.h"
#include <windows.h>

using namespace std;


int Student::studentNumber = 0;

int main()
{
    School school;
    system("cls");
    system("color 0e");
    int choix;

   do{
                system("color 0a");
                system("cls");
                printf("\n\n\n\t\t\t\t\t========== Menu ==========\n\n\n\n\n\n");
                printf("\t1. Add a student \n\n");
                printf("\t2. Display all school students\n\n");
                printf("\t3. Search for a student by name\n\n\n");
                cout << "\t0. Quit" << endl;
                cout << "\n\t\t\tChoice: ";
                scanf("%d", &choix);

                switch (choix)
                {
                case 1:
                    {

                    system("cls");

                    string name;
                    int age;

                    cout << "\n\tEnter the name of student: ";
                    fflush(stdin);
                    getline(cin, name);

                    cout << "\tEnter the age of student: ";
                    cin >> age;
                    Student s(name , age);

                    school.addStudent(s);
                    cout << "\tStudent added! \n\n\n\n" << '\n';
                    }

                    break;
                case 2:
                    {
                        system("cls");
                    school.displayAllStudent();
                    }
                    break;

                case 3:
                    {
                        system("cls");
                    system("color 0e");
                    string searchName;
                    cout << "\nEnter the name of student to search: ";
                    cin >> searchName;
                    int result = school.SearchStudentByName(searchName);
                    if (result != -1)
                        cout << "\tStudent exists." << endl;
                    else
                        cout << "\tStudent does not exist!" << endl;
                    break;
                    }

                }
                system("pause");
            } while (choix);



    return 0;
}
