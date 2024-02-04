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

template <class T>
void Array<T>::dlt_at_end()
{
	UB -= 1;
}

template <class T>
void Array<T>::dlt_at_begining()
{
	LB += 1;
}

template <class T>
void Array<T>::dlt_at_index(int pos)
{
	if (LB<=pos and UB>=pos)
	{
		k = pos + 1;
		while (k <= UB)
		{
			A[k - 1] = A[k];
			k += 1;
		}
		UB -= 1;
	}
	else
	{
		cout << "out of boundry";
	}
}

template<class T>
T Array<T>::linear_search(T key)
{
	int index=NULL;
	int i=LB;
	while (i<=UB)
	{
		if (A[i]==key)
		{
			index=i;
			break;
		}
		i=i+1;
	}
	return index;
}

template<class T>
T Array<T>::swap(T,int p,int q)
{
	int t=A[p];
	A[p]=A[q];
	A[q]=t;
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