//������ ������� �++
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
		throw std::invalid_argument("���������� ������������� ����� �������");
	
	std::cout << '[';
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ",";
	std::cout << "\b\b]\n";
}




double devide(double num1, double num2) {
	if (num2 == 0)
		//throw "���������� ������� �� 0";
		//throw std::exception("���������� ������� �� 0");
		throw std::invalid_argument("������ �� 0 ������");
	return num1 / num2;
}


int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	std::string path = "file.txt";

	//������������ �������� (if...else)
	/*std::cout << "������� ������ ���������:";
	std::cin >> n;
	std::cout << "������� ����� ���������:";
	std::cin >> m;
	if (n < m)
		std::cout << "���� ����������";
	else
		std::cout << "������ �����";*/

		//��������� ����������
		/*try {
			std::cout << "������� ������ ���������: ";
			std::cin >> n;
			std::cout << "������� ����� ���������: ";
			std::cin >> m;
			if (n > m)
				throw 1; //�������� ��� break, return
				if (n == m)
					throw "������� ��������� �����.";
				std::cout << "���� ����������";
		}
		catch(const int & e){
			if (e == 1)
		std::cout << "������ ��������� ������ ����� ���������.\n";
			//else
				//if (S == 2)
				//	std::cout << "������� ��������� �����.\n";

		}
		catch (const char*& e) {
			std::cout << "������: " << e <<"\n";

		}*/

		// ������� �� 0
		/*try {
			std::cout << "������� ������ �����: ";
			std::cin >> n;
			std::cout << "������� ������ �����: ";
			std::cin >> m;
			std::cout << n << " / " << m << " = " << devide(n, m) << "\n";
		}
		catch (const char* ex) {
			std::cout << "������: " << ex << "\n";

		}
		catch (const std::exception& ex) { //����� invalid_argument
			std::cout << "������: " << ex.what() << "\n";
		}*/

		//���������� ��� ������ � ������� (�� ��������)
		/*std::ofstream out;

		out.exceptions(std::ios::badbit | std::ios::failbit | std::ios::eofbit);//��������� ��������� ����������

		try {
			out.open(path);
			std::cout << "���� ������ ��� ������.";
			out.close();
		}
		catch (const std::ios::failure & ex) {// ����� ��� ������ � ������������ ����������� fstream
			std::cout << "������ �������� �����:" << ex.what() << "\n";
			std::cout << "��� ������: " << ex.code().value() << '\n';//�������� ��������� � ��� ���� int
	}
	*/

	//������ 1. ����� ������� �� �����
	std::cout << "������ 1.\n������\n";
	const int size = 10;
	int arr[size];
	try {
		fill_arr(arr, size, 1, 11);
		show_arr(arr, -5);
	}
	catch (const std::exception& ex) {
		std::cout << "���������� ������������� ����� �������.";
	}






	return 0;
}