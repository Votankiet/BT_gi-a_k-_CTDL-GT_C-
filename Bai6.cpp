#include <iostream>
//Cho mảng 1 chiều các số thực. Hãy viết hàm đệ quy tính tổng các giá trị dương có trong mảng
using namespace std;
//Bai 16
double sumOfPosEleArray(double arr[], int n) {
    if(n == 0) {
        return 0;
    }
    double ele = 0;
    if(arr[n - 1] > 0) {
        ele = arr[n - 1];
    } 
    return ele + sumOfPosEleArray(arr, n - 1);
}
int main() {
    int n = 4;
    double arr[] = {-1.2, -10.1, 3.3, 1.3};
    cout << "Result is: " << sumOfPosEleArray(arr, n);
}
