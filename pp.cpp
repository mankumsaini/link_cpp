//bubble sort
#include <iostream>
using namespace std;

bubble_sort(int arr[], int size){

    for(int i=0; i<size; i++){
        for(int j=0; j<size-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

print(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[100];
    int size;

    cout<<"size of the array: ";
    cin>>size;
    cout<<endl;

    cout<<"entre element of the array: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    bubble_sort(arr, size);

    print(arr, size);





    return 0;
}


