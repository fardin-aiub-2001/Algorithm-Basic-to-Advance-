#include<iostream>
using namespace std;

void print(int *arr){
    for(int i=0;i<10;i++){
        cout<<arr[i]<<"   ";
    }
}
void bubblesort(int *array,int size){
    /*
    Time complexity
    Best case  = O(n)   (when the array is already sorted, only one pass)
    Average case = O(n^2)  (random order)
    Worst case = O(n^2)  (completely reversed order)
    */
    int right= size-1;
    int flag;
    for(int i=right;i>0;i--){
            flag=0;
        for(int j=0;j<i;j++){
            if(array[j]>array[j+1]){
                swap(array[j],array[j+1]);
                flag++;
            }

        }
        if(flag==0){
            break;
        }
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
    cout<<"Bubble sort"<<endl;
    int array[10]={30,40,20,10,5,6,4,70,80,55};
    cout<<"Unsorted array              : ";
    print(array);
    cout<<endl;
    cout<<"Sorted array by bubble sort : ";
    bubblesort(array,10);
}


