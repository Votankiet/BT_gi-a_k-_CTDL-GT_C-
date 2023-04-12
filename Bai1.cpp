#include <iostream>
using namespace std;

// Hàm chèn phần tử vào mảng đã sắp xếp tăng dần
void insert(float arr[], int n) {
    if (n <= 1) return; // Trường hợp cơ bản
    insert(arr, n - 1); // Sắp xếp các phần tử từ 0 đến n-2
    float last = arr[n - 1]; // Lưu giá trị phần tử cuối cùng
    int j = n - 2; // Bắt đầu tìm vị trí chèn từ vị trí n-2
    while (j >= 0 && arr[j] > last) {
        arr[j + 1] = arr[j]; // Dời các phần tử lớn hơn last về bên phải
        j--;
    }
    arr[j + 1] = last; // Chèn phần tử last vào vị trí thích hợp
}

int main() {
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    float arr[n];
    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    insert(arr, n);
    cout << "Mang sau khi sap xep: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
