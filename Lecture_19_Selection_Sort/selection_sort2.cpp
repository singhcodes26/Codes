//decreasing orde
#include <iostream>

using namespace std;

int main() {

int arr[5]={7,1,4,8,2};

for(int i = 0;i<4;i++){

int index = i;

for(int j=i+1;j<5;j++){ if(arr[index]<arr[j]){

swap(arr[index],arr[j]);

}

}

}

for(int i=0;i<5;i++){

cout<<arr[i]<<" ";

}

return 0;

}