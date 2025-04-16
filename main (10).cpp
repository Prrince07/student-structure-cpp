#include <iostream>
using namespace std;

struct Student {
    string name;     
    int age;         
    float grade;     
};

void displayStudentDetails(Student s) {
    cout << "Student Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    cout << "Grade: " << s.grade << endl;
}

int main() {
    Student student1 = {"prince kumar", 19, 85.5};

    displayStudentDetails(student1);

    return 0;
}
