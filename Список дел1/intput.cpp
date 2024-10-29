#include "input.h"

void InputCaseStock(vector <Case>& case_stock)
{
	int n = 0;
	cout << "Сколько дел Вы хотите добавить?" << endl;
	cin >> n;
	case_stock.reserve(n);
	for (int i = 0; i < n; ++i)
	{
		Case thing = InputCase();
		case_stock.push_back(thing);
	}
}