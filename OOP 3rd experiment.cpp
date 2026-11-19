#include <iostream>
#include <utility>
using namespace std;

class Student {
private:
    int* marks;

public:
    // 1. Default Constructor
    Student() {
        marks = new int(0);
        cout << "Default Constructor\n";
    }

    // 2. Parameterized Constructor
    Student(int m) {
        marks = new int(m);
        cout << "Parameterized Constructor\n";
    }

    // 3. Copy Constructor
    Student(const Student& s) {
        marks = new int(*s.marks);
        cout << "Copy Constructor\n";
    }

    // 4. Move Constructor
    Student(Student&& s) noexcept {
        marks = s.marks;
        s.marks = nullptr;
        cout << "Move Constructor\n";
    }

    // 5. Copy Assignment Operator
    Student& operator=(const Student& s) {
        if (this != &s) {
            int* temp = new int(*s.marks);
            delete marks;
            marks = temp;
        }
        cout << "Copy Assignment\n";
        return *this;
    }

    // 6. Move Assignment Operator
    Student& operator=(Student&& s) noexcept {
        if (this != &s) {
            delete marks;
            marks = s.marks;
            s.marks = nullptr;
        }
        cout << "Move Assignment\n";
        return *this;
    }

    // Display function
    void display() {
        if (marks)
            cout << "Marks: " << *marks << endl;
        else
            cout << "No data\n";
    }

    // 7. Destructor
    ~Student() {
        delete marks;
        cout << "Destructor Called\n";
    }
};

int main() {
    Student s1;
    Student s2(90);
    Student s3(s2);
    Student s4(move(s2));

    cout << "\nStudent Details:\n";
    s1.display();
    s2.display();
    s3.display();
    s4.display();

    Student s5;
    s5 = s3;

    Student s6;
    s6 = move(s4);

    return 0;
}
