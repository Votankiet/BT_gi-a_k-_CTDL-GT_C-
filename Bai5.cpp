#include <iostream>

using namespace std;
//Bai 17
double sumOfArray(double arr[], int n) {
    if(n == 0) {
        return 0;
    }
    return arr[n - 1] + sumOfArray(arr, n - 1);
}
int main() {
    int n = 4;
    double arr[] = {-1.2, -10.1, 3.3, -1.3};
    cout << "Result is: " << sumOfArray(arr, n);
}