#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void fillArr(int arr[], int size, int min, int max) {
	srand(time(NULL));
	for (int i = 0; i < size; i++)
		arr[i] = rand() % (max - min) + min;
}

template <typename T> void printArr(T arr[], int size) {
	cout << "[";
	for (int i = 0; i < size; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]\n";
}


void resizeArr(int arr[], int length, int size) {
	int* A = new int[length];
	int* B = new int[size];
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	// Задача 1
	cout << "Задача 1.\nВведите размер массива: ";
	cin >> n >> m;
	int* A = new int[n];
	int* B = new int[m];
	fillArr(A, n, 10, 31);
	fillArr(B, m, 50, 71);
	cout << "Массив A:\n";
	printArr(A, n);
	cout << "Массив B:\n";
	printArr(B, m);
	int* C = new int[n + m];
	for (int i = 0; i < n; i++)
		C[i] = A[i];
	for (int i = n; i < n + m; i++)
		C[i] = B[i - n];
	cout << "Массив C:\n";
	printArr(C, n + m);
	delete[] A;
	delete[] B;

	// Задача 2
	cout << "Задача 2.\n";
	int arr2[10];
	cin >> n >> m;
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
		arr2[i] = rand() % (n - m) + n;
	arr2 = resizeArr(arr2, 10, 15);
	return 0;
}