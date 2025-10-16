#include <iostream>
#include <algorithm>
using namespace std;

int sort (){
    double x;
int arr[5];
for(int i = 0; i < 5; i++){
    cin >> x;
    arr[i] = x;
};
int n = 5;
sort(arr, arr + n);
for (int i : arr)
        cout << i << " ";
    return 0;
}