#include <iostream>
//Hãy khai báo cấu trúc dữ liệu của cây nhị phân các số nguy
using namespace std;
//Bai 14
struct BinaryTree {
    int value;
    BinaryTree *left;
    BinaryTree *right;
    //Khoi tao 1 node trong cay nhi phan
    BinaryTree(int value, BinaryTree *left, BinaryTree *right) {
        this->value = value;
        this->left = left;
        this->right = right;
    }
    BinaryTree(int value) {
        this->value = value;
    }
};
int main() {
    
}
