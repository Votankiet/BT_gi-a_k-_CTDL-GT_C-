#include <iostream>

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