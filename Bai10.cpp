#include <iostream>
//Cho mảng 1 chiều các số nguyên. Viết hàm đệ quy xuất mảng
using namespace std;
//Bai 12
void print(int arr[], int n) {
    if(n == 0) {
        return ;
    }
    cout << arr[n - 1] << " ";
    print(arr, n - 1);
}
int main() {
    int n = 4;
    int arr[] = {-1, -10, 3, 1};
    print(arr, n);
}
