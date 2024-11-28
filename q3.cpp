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
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

  
}

