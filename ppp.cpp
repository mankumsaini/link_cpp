#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    
    int start=0;
    int end=size-1;
    int mid;

    while(start<=end){
    int mid = start + (end - start) / 2;

        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}

int main(){

    int arr[100];
    int size;
    int key;

    cout<<"size of the array: ";
    cin>>size;
    cout<<endl;

    cout<<"enter element of the array: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<endl;

    cout<<"enter element of the array: ";
    cin>>key;
    cout<<endl;

    int result= binarySearch(arr,size, key);
    cout<<"key is present at: "<<result<<endl;


    return 0;
}