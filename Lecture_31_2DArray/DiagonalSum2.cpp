// both diagonals sums in one 
#include <iostream>

using namespace std;

int main() {

int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

int row = 3;

int col = 3;

int sum =0;

int sum1 =0;

for(int i=0;i<row;i++){

for(int j=0;j<col;j++){

if(i==j){ sum+=arr[i][j]; } }

else if(i+j==(row-1)){

sum1+=arr[i][j];

}

}

cout<<"Diagonals Sum is "<<sum+sum1<<endl;

return 0;
}
