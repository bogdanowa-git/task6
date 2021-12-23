

#include <iostream>

using namespace std;

int main()
{
	int fl;
	do
	{
		system("cls");  //очистка экрана при повторе программы
		setlocale(0, "");

		int n;
		cout << "Введите n: ";
		cin >> n;
		
		int* b = new int[n]; //создание одномерного массива 
		srand(time_t(0));
		for (int i = 0; i < n; i++)
			*(b + i) = rand() % (100 + 1) - 50; //заполнение одномерного массива рандомными числами
		cout << "Массив: ";
		for (int i = 0; i < n; i++) //вывод одномерного массива
			cout << *(b + i) << " "; 
		cout << endl;
		
		int** a = new int* [n];
		for (int i = 0; i < n; i++) a[i] = new int[n]; //создание матрицы


		cout << "Исходная матрица: " << endl; 
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				a[i][j] = rand() % (100 + 1) - 50;
				cout << a[i][j] << "\t"; //заполнение и вывод массива с рандомными числами
			}
			cout << endl;
		}

		cout << endl;

		int i;
		for (int i = 0; i < n; i++) //замена элементов в массиве
		{
			if (*(b+i) > 0)
			{
				for (int j = 0; j < n; j++) 
				{
					if (a[i][j] > 0) a[i][j] = 1; //замена положительных элементов на 1
					else if (a[i][j] < 0) a[i][j] = -1; //замена отрицательных элементов на -1
				}
			}
		}
		cout << endl;


		cout << "Измененный массив: " << endl;
		for (int i = 0; i < n; i++) //вывод измененного массива
		{
			for (int j = 0; j < n; j++)
			{
				cout << a[i][j] << "\t ";
			}
			cout << endl;

			
		}
		cout << "Хотите повторить? 0 - нет, 1 - да: ";
		cin >> fl;


	} while (fl == 1); //повтор программы через do while
}




