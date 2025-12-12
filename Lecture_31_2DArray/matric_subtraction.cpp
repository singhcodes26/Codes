//sum of A-B
#include <iostream>

using namespace std;

int main() {

int B[3][3]={{18,16,17},{16,15,14},{13,12,11}}; int A[3][3]={{1,2,3},{4,5,6},{7,8,9}};

int C[3][3];

int row = 3;

int col = 3;

for(int i=0;i<row;i++){ for(int j=0;j<col;j++){ C[i][j] = B[i][j]-A[i][j]; }

}

for(int i=0;i<row;i++){

for(int j=0;j<col;j++){

cout<<C[i][j]<<" "; }

cout<<endl;

}
}