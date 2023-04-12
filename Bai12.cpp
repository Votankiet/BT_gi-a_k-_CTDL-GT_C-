#include <iostream>

using namespace std;
//Bai 10
int sumOfEvenEleArray(int arr[], int n) {
    if(n == 0) {
        return 0;
    }
    int ele = 0;
    if((arr[n - 1] % 2) == 0) {
        ele = arr[n - 1];
    } 
    return ele + sumOfEvenEleArray(arr, n - 1);
}
int main() {
    int n = 4;
    int arr[] = {-1, -10, 3, 2};
    cout << "Result is: " << sumOfEvenEleArray(arr, n);
}