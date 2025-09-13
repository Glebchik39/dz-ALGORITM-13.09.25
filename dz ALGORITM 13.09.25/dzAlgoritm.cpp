#include <iostream>
using namespace std;

int main()
{

	//1.
	/*srand(unsigned(time(0)));*/
	//int array[10];
	//int min;
	//int max;
	//for (size_t i = 0; i < 10; i++)
	//{
	//	array[i] = rand() % 101;
	//}
	//array[0] = min;
	//array[0] = max;

	//for (size_t i = 0; i < 10; i++)
	//{
	//	if (array[i] > max)
	//	{
	//		max = array[i];
	//	}
	//    if (array[i] < min)
	//	{
	//		min = array[i];
	//	}
	//	cout << array[i] << " min: " << min << " max: " << max;
	//}

	//2.
	//int size;
	//cout << "Enter size a array: ";
	//cin >> size;
	//int sum = 0;
	//int* array = new int [size];
	//for (size_t i = 0; i < size; i++)
	//{
	//	array[i] = rand() % 101;
	//}
	//for (size_t i = 0; i < size; i++)
	//{
	//	if (sum < size)
	//	{
	//		sum += array[i];
	//	}
	//}
	//cout <<  array[size] << " " << "Sum: " << sum << endl;

	//int sum = 0;
	//for (size_t i = 0; i < 10; i++)
	//{
	//	sum += i;
	//	sum++;
	//}
	//cout << "Sum : " << sum;
	setlocale(LC_ALL, "Russian");
	int premia[12];
	int min;
	int max;
	int start;
	int end;
	int const month = 12;
	for (size_t i = 0; i < month; i++)
	{
		cout << "¬ведите прибыль которую вы заработали: " << i + 1 << ": ";
		cin >> premia[i];
	} 

	cout << "¬веди с какого мес€ц хочешь сумму посмотреть: ";
	cin >> start;
	cout << "¬ведите по какой мес€ц хочешь посмотреть прибыль: ";
	cin >> end;
	min = start - 1;
	max = start - 1;
	for (size_t i = 0; i < month; i++)
	{
			if (premia[i] < min)
			{
				min = premia[i];
			}
			if (premia[i] > max)
	        {
		        max = premia[i];
	        }
	}
	cout << "Maks premia : " << max << " in month: " << month << " Min premia: " << min << " in month ";

}