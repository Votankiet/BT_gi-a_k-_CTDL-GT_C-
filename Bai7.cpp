#include <iostream>

using namespace std;
//Bai 15
struct DoubleLinkedList {
    int value;
    DoubleLinkedList *next;
    DoubleLinkedList *pre;
    //Khoi tao 1 node trong danh sach lien ket doi
    DoubleLinkedList(int value, DoubleLinkedList *next, DoubleLinkedList *pre) {
        this->value = value;
        this->next = next;
        this->pre = pre;
    }
    DoubleLinkedList(int value) {
        this->value = value;
    }
};
int main() {
    DoubleLinkedList *newNode = new DoubleLinkedList(12);
    newNode->next = new DoubleLinkedList(2, NULL, newNode);
    newNode->pre = new DoubleLinkedList(1, newNode, NULL);
    // 1 - 12 - 2
    cout << newNode->value << endl; // in ra 12;
    newNode = newNode->pre;
    cout << newNode->value << endl; // in ra 1;
    newNode = (newNode->next)->next;
    cout << newNode->value << endl; // in ra 2;
}