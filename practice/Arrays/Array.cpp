#include "Array.h"

template <class T>
Array<T>::Array()
{
	LB = 1;
	UB = 0;
}
template <class T>
Array<T>::Array(int LB, int UB, T x[])
{
}
template <class T>
void Array<T>::insert_at_end(T key)
{
	UB = UB + 1;
	A[UB] = key;
}

template <class T>
void Array<T>::insert_at_begining(T key)
{
	UB += 1;
	int i = UB - 1;
	while (i >= LB)
	{
		A[i + 1] = A[i];
		i -= 1;
	}
	A[LB] = key;
}

template <class U>
ostream &operator<<(ostream &os, Array<U> M)
{
	int i;
	os << endl;
	for (i = M.LB; i <= M.UB; i++)
	{
		os << M.A[i] << " ";
	}
	os << endl;
	return os;
}