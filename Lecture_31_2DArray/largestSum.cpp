//largest number in 2D array
#include <iostream>

#include <climits>

using namespace std;

int main() {

int arr[3][3]={{1,2,3},{4,5,16},{7,8,9}};

int row = 3;

int col = 3;

int largest = INT_MIN;

for(int i=0;i<row;i++){

for(int j=0;j<col;j++){

if(arr[i][j]>largest){

largest=arr[i][j];

}

}

}

}

cout<<"largest number is "<<largest<<endl;

return 0;
}