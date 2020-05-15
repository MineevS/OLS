#include <iostream>
#include "LinkedList.h"

using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "RUSSIAN");
	
    LinkedList A;// ::LinkedList() 

    for (int i = 0; i < 10; ++i)
	{
		A.pushBack(i); 
	}
	
    for (int i = 0; i < A.size(); ++i)
	{    
		cout << A[i] << " ";
		
	}
	cout << endl;

    A.remove(3);//index

    for (int i = 0; i < A.size(); ++i)
	{
		
		cout << A[i] << " ";
	}
	
	cout << endl;

    A.reverse();

    for (int i = 0; i < A.size(); ++i)
	{
		cout << A[i] << " ";
	}
	
	cout << endl;
	
	A.removeFront();//+
	
	A.removeBack();//+
	
	for (int i = 0; i < A.size(); ++i)
	{
		cout << A[i] << " ";
	}
	
	cout << endl;
	
	cout << A.size() << endl;//+
	
	cout << A.findIndex(4) << endl;//Выодит индекс для элемента в списке.
	
	LinkedList B;
	
	for (int i = 0; i < 20; ++i)
	{
		B.pushBack(i); 
	}

	LinkedList C = B;
	
	cout << endl;
	
	for (int i = 0; i < C.size(); ++i)
	{
		cout << C[i] << " ";
	}
	
	cout << endl;
	
	for (int i = 0; i < C.size(); ++i)
	{
		cout << C[i] << " ";
	}
	
	cout << endl;
	
	B.insert(4, 52);
	
	for (int i = 0; i < B.size(); ++i)
	{
		cout << B[i] << " ";
	}
	
	cout << endl;

	return 0;
}