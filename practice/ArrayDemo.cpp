#include "Array.cpp"

int main(){
	Array<int> myArray;
	myArray.insert_at_end(3);
	myArray.insert_at_end(5);
	myArray.insert_at_end(6);
	cout<<myArray;
	
	Array<float> myfArray;
	myfArray.insert_at_end(3.5);
	myfArray.insert_at_end(5.5);
	myfArray.insert_at_end(6.3);
	cout<<myfArray;
	return 0;
}