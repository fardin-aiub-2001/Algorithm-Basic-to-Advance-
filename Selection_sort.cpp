#include<iostream>
using namespace std;

void print(int *arr){
    for(int i=0;i<10;i++){
        cout<<arr[i]<<"   ";
    }
}
void selectionsort(int *array,int size){
    for(int i=0;i<size-1;i++){
            int min=array[i];
            int k=i;
        for(int j=i+1;j<size;j++){
            if(min>array[j]){
                k=j;
                min=array[j];
            }
        }
        swap(array[i],array[k]);
    }
    print(array);
}
/*
Time complexity
best case=
avg case=
worst case=
*/

int main(){
    cout<<"Selection sort"<<endl;
    int array[10]={30,40,20,10,5,6,4,70,80,55};
    cout<<"Unsorted array              : ";
    print(array);
    cout<<endl;
    cout<<"Sorted array by selection sort : ";
    selectionsort(array,10);
}



