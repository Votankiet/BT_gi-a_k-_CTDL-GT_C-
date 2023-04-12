#include <iostream>
using namespace std;

int findMax(int arr[], int n) {
    // Trường hợp cơ sở: nếu chỉ có 1 phần tử trong mảng, trả về giá trị đó
    if (n == 1) {
        return arr[0];
    }
    // Trường hợp đệ quy: tìm giá trị lớn nhất trong phần tử đầu tiên đến phần tử thứ n-1
    int max = findMax(arr, n - 1);
    // So sánh giá trị lớn nhất đã tìm được với phần tử thứ n, trả về giá trị lớn hơn
    if (max > arr[n - 1]) {
        return max;
    } else {
        return arr[n - 1];
    }
}

int main() {
    int arr[] = { 12, 45, 67, 23, 56 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = findMax(arr, n);
    cout << "Max value in the array: " << max << endl;
    return 0;
}
