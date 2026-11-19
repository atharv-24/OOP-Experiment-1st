#include <iostream>
#include <string>
using namespace std;

template <class T>
class Stack {
    T arr[5];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(T x) {
        if (top == 4)
            cout << "Stack Overflow\n";
        else
            arr[++top] = x;
    }

    void pop() {
        if (top == -1)
            cout << "Stack Underflow\n";
        else
            top--;
    }

    void display() {
        for (int i = top; i >= 0; i--)
            cout << arr[i] << " ";

        cout << endl;
    }
};

int main() {
    Stack<int> s1;
    Stack<float> s2;
    Stack<string> s3;

    s1.push(10);
    s1.push(20);

    s2.push(5.5);
    s2.push(8.5);

    s3.push("Hello");
    s3.push("World");

    cout << "Integer Stack: ";
    s1.display();

    cout << "Float Stack: ";
    s2.display();

    cout << "String Stack: ";
    s3.display();

    return 0;
}
