#include <iostream>

using namespace std;
//Bai 13
double countOfPosEleArray(double arr[], int n) {
    if(n == 0) {
        return 0;
    }

    if(arr[n - 1] > 0) {
        return 1 + countOfPosEleArray(arr, n - 1);
    } 
    else {
        return countOfPosEleArray(arr, n - 1);
    }
}
int main() {
    int n = 4;
    double arr[] = {-1.2, -10.1, 3.3, 1.3};
    cout << "Result is: " << countOfPosEleArray(arr, n);
}