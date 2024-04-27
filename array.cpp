#include <iostream>
using namespace std;


int main() {
    int arr1[size] = {1, 2, 3, 4, 5};
    int arr2[size] = {6, 7, 8, 9, 10};
    int result[size];
    
     for (int i = 0; i < size; i++) {
        result[i] = arr1[i] + arr2[i];
    }


    

    

    cout << "The result of adding the two arrays is: ";
    for (int i = 0; i < size; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}