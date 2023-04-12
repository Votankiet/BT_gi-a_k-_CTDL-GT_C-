#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

class Stack {
private:
    int arr[MAX_SIZE];
    int top;
public:
    Stack() {
        top = -1;
    }
    void push(int item) {
        if (top < MAX_SIZE - 1) {
            top++;
            arr[top] = item;
        }
        else {
            cout << "Stack overflow" << endl;
        }
    }
    int pop() {
        if (top >= 0) {
            int item = arr[top];
            top--;
            return item;
        }
        else {
            cout << "Stack underflow" << endl;
            return -1;
        }
    }
    int peek() {
        if (top >= 0) {
            return arr[top];
        }
        else {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }
    bool is_empty() {
        return top == -1;
    }
};

int main() {
    int arr[] = {41, 23, 4, 14, 56, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    Stack s;
    for (int i = 0; i < n; i++) {
        s.push(arr[i]);
    }

    int top_value = s.peek();
    cout << "Top value: " << top_value << endl;

    cout << "Remaining stack elements: " << endl;
    while (!s.is_empty()) {
        cout << s.pop() << endl;
    }

    return 0;
}