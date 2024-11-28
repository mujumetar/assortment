#include<iostream>
using namespace std;

int main(){
	int size;
	
	cout << "Enter The Size Of The Arrey: ";
	cin >> size;
	
	int a[size];
	
	for(int i = 0;i <= size; i++) 
	{
		cout << "a["<< i <<"]: ";
		cin >> a[i];

	}
	
	
	for(int i = 0;i <= size; i++) 
	{
		if(a[i] < 0)
		{
			cout << "nagative element from array: ";
			cout << a[i] << endl;	
		}
	}
	
}