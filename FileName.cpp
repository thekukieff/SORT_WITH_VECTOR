#include <iostream>
#include <algorithm>
#include <vector>

int main() {
	const int SIZE = 5;
	//int arr[SIZE]{ 98,76,54,32,10 };
	int mass[SIZE]{45,789,4564,223,11};
	std::vector <int> arr(mass,mass+SIZE);
	std::sort(arr.begin(), arr.end());
	for (int i : arr) {
		std::cout << i << " ";
	}

}