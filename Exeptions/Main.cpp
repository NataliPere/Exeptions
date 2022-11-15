//Шаблон проекта С++
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>


template <typename T>
void fill_arr(T arr[], const int length, int begin, int end) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (end - begin) + begin;
}

template <typename T>
void show_arr(T arr[], const int length) {
	if (length <= 0)
		throw std::invalid_argument("обнаружена отрицательная длина массива");
	
	std::cout << '[';
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ",";
	std::cout << "\b\b]\n";
}




double devide(double num1, double num2) {
	if (num2 == 0)
		//throw "обнаружено деление на 0";
		//throw std::exception("обнаружено деление на 0");
		throw std::invalid_argument("делить на 0 нельзя");
	return num1 / num2;
}


int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	std::string path = "file.txt";

	//Классическая проверка (if...else)
	/*std::cout << "Введите начало диапазона:";
	std::cin >> n;
	std::cout << "Введите конец диапазона:";
	std::cin >> m;
	if (n < m)
		std::cout << "Ввод корректный";
	else
		std::cout << "Ошибка ввода";*/

		//Обработка исключений
		/*try {
			std::cout << "Введите начало диапазона: ";
			std::cin >> n;
			std::cout << "Введите конец диапазона: ";
			std::cin >> m;
			if (n > m)
				throw 1; //работает как break, return
				if (n == m)
					throw "Границы диапазона равны.";
				std::cout << "Ввод корректный";
		}
		catch(const int & e){
			if (e == 1)
		std::cout << "Начало диапазона больше конца диапазона.\n";
			//else
				//if (S == 2)
				//	std::cout << "Границы диапазона равны.\n";

		}
		catch (const char*& e) {
			std::cout << "Ошибка: " << e <<"\n";

		}*/

		// Деление на 0
		/*try {
			std::cout << "Введите первое число: ";
			std::cin >> n;
			std::cout << "Введите второе число: ";
			std::cin >> m;
			std::cout << n << " / " << m << " = " << devide(n, m) << "\n";
		}
		catch (const char* ex) {
			std::cout << "Ошибка: " << ex << "\n";

		}
		catch (const std::exception& ex) { //ловим invalid_argument
			std::cout << "Ошибка: " << ex.what() << "\n";
		}*/

		//Исключения при работе с файлами (на открытие)
		/*std::ofstream out;

		out.exceptions(std::ios::badbit | std::ios::failbit | std::ios::eofbit);//разрешаем категории исключений

		try {
			out.open(path);
			std::cout << "Файл открыт для записи.";
			out.close();
		}
		catch (const std::ios::failure & ex) {// класс для работы с исключениями бибилиотеки fstream
			std::cout << "Ошибка открытия файла:" << ex.what() << "\n";
			std::cout << "Код ошибки: " << ex.code().value() << '\n';//содержит сообщение и код типа int
	}
	*/

	//Задача 1. Вывод массива на экран
	std::cout << "Задача 1.\nМассив\n";
	const int size = 10;
	int arr[size];
	try {
		fill_arr(arr, size, 1, 11);
		show_arr(arr, -5);
	}
	catch (const std::exception& ex) {
		std::cout << "Обнаружена отрицательная длина массива.";
	}






	return 0;
}