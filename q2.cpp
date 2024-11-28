#include <iostream>

using namespace std;

int main() {
	int r,c;

	cout << "enter rows: ";
	cin >> r;
	cout << "enter cols: ";
	cin >> c;
	
	int a[r][c];
	
	
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cout << "arr["<<i<<"]["<<j<<"]: ";
			cin >> a[i][j];
		}
		cout << endl;
	}

	int max = 0;
	
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			if(a[i][j] > max)
			{
				max = a[i][j];  //  max =12
			}
		}
	}
	
	cout << "The largest element is: " << max;
				
}