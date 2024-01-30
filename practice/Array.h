#include<iostream>
#include<ostream>

using namespace std;
template <class T>
class Array{
	int LB,UB;
	T A[100];
  public:
  	Array();
  	Array(int,int,T[]);
  	void insert_at_end(T);
 	template <class U>
  	friend ostream& operator<<(ostream&, Array<U> );
};