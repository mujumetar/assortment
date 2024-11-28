#include <iostream>
using namespace std;

int main(){
	int r, c, row, col;
	int els;


	cout << "enter the rows: ";
	cin >> r;
	cout << "enter the cols: ";
	cin >> c;
  
  int arr[r][c];

  
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){

			cout << "arr["<<i<<"]["<<j<<"]: ";
			cin >> arr[i][j];
		}
		cout << endl;
	}
   

	for(int i = 0; i<r; i++){
		 for(int j = 0; j<c; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	cout << "enter the value of row: ";
	cin >> row;

	cout << "enter the value of col:";
	cin >> col;
	
	int row_sum =0;
	int col_sum=0;
	
	
	cout << "rows elements: ";
	for(int i = 0; i<r; i++){
		 for(int j = 0; j<c; j++){
				if(i == row)
				{	
					cout << arr[i][j] << " ";
				}
		 }
		}
		cout << endl;

		cout << "collumn element: ";

	for(int i = 0; i<r; i++){
		 for(int j = 0; j<c; j++){
				if(i == row)
				{	
				row_sum += arr[i][j];
				}
		
			if(j == col)
			{
				cout << arr[i][j] << " ";
				col_sum += arr[i][j];
			}
		 }
		}
		cout << endl;
	

	
	cout << "row sum: " << row_sum << endl;
	cout << "col sum: " << col_sum << endl;
	
}

