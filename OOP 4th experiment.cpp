#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void getPerson() {
        cout << "Enter name and age: ";
        cin >> name >> age;
    }
};

class Student : public Person {
public:
    int rollNo;

    void getStudent() {
        cout << "Enter roll number: ";
        cin >> rollNo;
    }
};

class GraduateStudent : public Student {
public:
    string researchTopic;

    void display() {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
        cout << "\nRoll No: " << rollNo;
        cout << "\nResearch Topic: " << researchTopic;
    }
};

int main() {
    GraduateStudent g;

    g.getPerson();
    g.getStudent();

    cout << "Enter research topic: ";
    cin >> g.researchTopic;

    g.display();

    return 0;
}
