#include "delete.h"

void DeleteStock(vector <Case>& case_stock) {
	string n;
	cout << "Как называется дело которое Вы хотите удалить?" << endl;
	getline(cin >> ws, n);
	int size = case_stock.size();

	for (int i = 0; i < size; ++i)
	{
		if (case_stock[i].name == n)
		{
			case_stock.erase(case_stock.begin() + i); //
			--size;
		}
	}
}