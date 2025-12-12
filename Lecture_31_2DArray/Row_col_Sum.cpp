// row and column sum
#include <iostream>

using namespace std;

int main() {

int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}}; int row=3,col=3,sum=0; for(int j=0;j<3;j++){ sum=0; for(int i=0;i<row;i++){ sum+=arr[i][j]; }

} cout<<"Column "<<j<<" sum is: "<<sum<<endl;

for(int j=0;j<3;j++){ } sum=0; for(int i=0;i<row;i++){ sum+=arr[j][i];

cout<<"Row "<<j<<" sum is: "<<sum<<endl; 
}
}