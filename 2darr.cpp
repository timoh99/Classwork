#include <iostream>
using namespace std;

int main() {

    int arr[5][5][2]= {
        {3,4,5,6,7},
        {3,5,6,8,9},
        {5,6,9,1,3},
        {9,11,12,13,14},
        {15,13,14,10,11}
    };

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            for(int n =0; n<2;n++){
            	cout << arr[i][j][n] << " ";
			}
        }
        cout << endl;
    }

    return 0;
}