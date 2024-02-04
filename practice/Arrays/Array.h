#include <iostream>
#include <ostream>
using namespace std;
template <class T>

class Array
{
	int LB, UB;
	T A[100];

public:
	Array();
	Array(int, int, T[]);
	void insert_at_end(T);
	void insert_at_begining(T);
	void insert_at_position(T, int);
	void dlt_at_begining();
	void dlt_at_end();
	void dlt_at_index();

	T linear_search(T);
	T swap();
	T find_min();
	T selection_sort();
	T binary_search(T);

	template <class U>
	friend ostream &operator<<(ostream &, Array<U>);
};