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

template <class T>
void Array<T>::insert_at_position(T key, int pos)
{
	UB = UB + 1;
	k = UB - 1;
	while (k >= pos)
	{
		A[k + 1] = A[k];
		k -= 1;
	}
	A[pos] = key;
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