#include <iostream>
using namespace std;

#define ROW 100 // Max row
#define COL 100 // Max column

int main()
{
	// kh?i t?o m?ng 2 d?ng 3 c?t
	int arr[ROW][COL];
	int row, col;

	// nh?p s? d?ng, c?t
	cout << "Nhap so dong: ";
	cin >> row;
	cout << "Nhap so cot: ";
	cin >> col;

	// nh?p m?ng 2 chi?u
	cout << "Nhap mang:" << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> arr[i][j];
		}
	}

	// xu?t m?ng 2 chi?u
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

