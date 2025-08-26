//sorting array in increasing order by

//taking the highest no to last place

#include <iostream>

using namespace std;

int main() {

//int n;

//cin>>n;

int arr[5]={7,1,5,2,8};

for(int i = 4;i>0;i--){

int index = 1;

for(int j = 0;j<=i-1;j++){ if(arr[index]<arr[j]){ swap(arr[index],arr[j]);

}

}

}

for(int i=0;i<5;i++){ cout<<arr[i]<<" ";

}

return 0;

}