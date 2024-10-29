#pragma once

#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Data {
	int day;
	int month;
	int year;
};
struct Case {
	string name;
	string preoperet;
	string discription;
	Data data;
	string time;
};
Data InputData();

Case InputCase();

bool operator == (Data date1, Data date2);

ostream& operator<<(ostream& cout, const Case& thing);

ostream& operator<< (ostream& output, const vector<Case>& mass);