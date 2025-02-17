#include "struct.h"

Data InputData() {
	string data_case;
	bool correct_data = false;
	Data data;
	do
	{
		cout << "������� ���� ����������" << endl;
		getline(cin >> ws, data_case);
		string DD = data_case.substr(0, 2);
		string MM = data_case.substr(3, 2);
		string YY = data_case.substr(6, 4);

		int D = atoi(DD.c_str());
		int M = atoi(MM.c_str());
		int Y = atoi(YY.c_str());

		data = { D, M, Y };
		if (D < 0 || D > 31 || M < 0 || M > 12 || Y < 2024 || Y > 2100)
		{
			cout << "�� ����� ������������ ����, ���������� �����." << endl;
		}
		else
		{
			correct_data = true;
		}
	} while (correct_data == false);

	return data;
}
Case InputCase()
{
	string name_case;
	string preoperet_case;
	string discription_case;
	Data data_case;
	string time_case;

	cout << "������� �������� " << endl;
	getline(cin >> ws, name_case);

	cout << "������� ���������" << endl;
	getline(cin >> ws, preoperet_case);

	cout << "������� ��������" << endl;
	getline(cin >> ws, discription_case);


	data_case = InputData();

	cout << "������� ����� ����������" << endl;
	getline(cin >> ws, time_case);

	return { name_case, preoperet_case, discription_case, data_case, time_case };
}
bool operator == (Data date1, Data date2) {
	if ((date1.day == date2.day) && (date1.month == date2.month) && (date1.year == date2.year))
	{
		return true;
	}
	else
	{
		return false;
	}
}
ostream& operator<<(ostream& cout, const Case& thing)
{
	cout << thing.name << endl;
	cout << thing.preoperet << endl;
	cout << thing.discription << endl;
	cout << thing.data.day << "." << thing.data.month << "." << thing.data.year << endl;
	cout << thing.time << endl;

	return cout; //�����������
}

ostream& operator<< (ostream& output, const vector<Case>& mass)
{
	output << "������ ���� ���: " << endl;

	for (const auto& s : mass)
	{
		output << s << endl;
	}

	return output; //�����������
}