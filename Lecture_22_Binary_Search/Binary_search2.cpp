// binary search in descending array

#include <iostream>

using namespace std;

int BinarySearch(int arr[], int n,int key){

int start =0, end n-1,mid;

while(start<=end) {

mid start (end-start)/2;

if(arr[mid]==key){

}

cout<<"found"<<endl;

return mid;

break;

else if(arr[mid]<key)

end = mid - 1;

}

else

start = mid+1;

}

return -1;

}

int main() {

int n = 12;

//cin>>n;

int key = 21;

int arr[n]={2,4,5,7,9,11,12,16,18,20,24,27};

cout<<BinarySearch(arr,n,key)<<endl;

return 0;
}