//sort the array of char in ascending order
#include <iostream>

using namespace std;

int main() {

char arr[5]={'c','a','m','g','i'};

for(int i = 0; i<4;i++){

int index = i;

for(int j=i+1;j<5;j++){ if(arr[index]>arr[j]){ swap(arr[index],arr[j]);

}

}

}

for(int i=0;i<5;i++){

cout<<arr[i]<<" ";

}

return 0;

}