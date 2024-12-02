#include <iostream>
#include <algorithm> 
#include <Windows.h>
using namespace std;

int main() {
int arr[10];

cout << "Введіть 10 чисел: ";
for (int i = 0; i < 10; i++) {
cin >> arr[i];
}

sort(arr, arr + 10, greater<int>());

cout << "Перші 3 максимальні елементи: ";
for (int i = 0; i < 3; i++) {
cout << arr[i] << " ";
}
cout << endl;

return 0;
}
