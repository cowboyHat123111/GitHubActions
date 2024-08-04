
#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;


int main()
{
	srand(time(NULL));
	int n;
	cout << "Input number of rows and columns (square matrix)\n";
	cin >> n;
	int **matrix = new int*[n];

	for (int i = 0;i < n;i++)
	{
		matrix[i] = new int[n];
	}

	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			matrix[i][j] = rand() % 10;
			cout <<setw(3)<< matrix[i][j];
		}
		cout << endl;
	}
	for (int i = 0; i < n;i++) 
	{
		delete[] matrix[i];
	}

	delete[] matrix;
}