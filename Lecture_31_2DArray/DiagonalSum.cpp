// left and right diagonal sum
#include <iostream>

using namespace std;

int main() {

int arr[3][3]={{1,2,3},{4,5,6},{10,8,9}};

int row = 3;

int col = 3;

int sum =0;

int sum1 =0;

for(int i=0;i<row;i++){

sum+=arr[i][i];

for(int j=0;j<col;j++){

if(i+j==(row-1)){

sum1+=arr[i][j];

}

}

}

}

cout<<"Left Diagonal Sum is "<<sum<<endl;

cout<<"Right Diagonal Sum is "<<sum1;

return 0;
}