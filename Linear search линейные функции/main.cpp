#include <iostream>

// вывод массива в консоль
template <typename T>
void print_arr(T arr[], const int length)
{
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ' ';
	std::cout << "\n";
}


// линейный поиск первого вхождения элемента key в массив arr с длиной length, 
// начиная с позиции  begin (по умолчанию 0)
template <typename T>
int search_index(T arr[], const int length, T key, int begin = 0)
{
	for(int i = begin; i < length; i++)
		if (arr[i] == key)
			return i;
	return -1; // возврат к позиции в -1
}

// линейный поиск последнего вхождения элемента key в массив arr с длиной length
template <typename T> 
int search_last_index(T arr[], const int length, T key)
{
	for (int i = length - 1; i >= 0; i--)
		if (arr[i] == key)
			return i;
	return -1;
}

// линейный поиск последнего вхождения элемента key в массив arr с длиной length
// начиная с позиции begin
template <typename T>
int search_last_index(T arr[], const int length, T key, int begin)
{
	for (int i = begin; i >= 0; i--)
		if (arr[i] == key)
			return i;
	return -1;
}


int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	const int size = 10;
	int arr[size]{10, 20, 12, 45, 10, 15, 50, 30, 55, 45};

	std::cout << "Массив:\n";
	print_arr(arr, size);

	std::cout << "Введите число для поиска -> ";
	std::cin >> n;
	// линейный поиск с переди
	
	int index1 = search_index(arr, size, n, 4); //4 это begin
	if (index1 != -1) //иизменение условий при позиции элемента массива в -1
		std::cout << "Позиция числа в массиве: " << index1 << std::endl;
	else
		std::cout << "Числа нет в массиве!\n";
	

	// линейный поиск с конца
	int index2 = search_last_index(arr, size, n, 5); // 5 - число переданеное в begin
	if (index2 != -1)
		std::cout << "позиция последнего вхождения числа в массив: " << index2 << std::endl;
	else
		std::cout << "числа нет в массиве.\n";

	return 0;
}