#include <iostream>

using namespace std;
//Bai 18
bool isNegativeArr(double arr[], int n) {
    if(n == 0) {
        return true;
    }
    int condition = false;
    if(arr[n - 1] < 0) {
        condition = true;
    } 
    return condition && isNegativeArr(arr, n - 1);
}
int main() {
    int n = 4;
    double arr[] = {-1.2, -10.1, 3.3, -1.3};
    if(isNegativeArr(arr, 4)) {
        cout << "Is Negative Array";
    }
    else {
        cout << "Isn't Negative Array";
    }
}