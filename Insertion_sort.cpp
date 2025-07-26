#include<iostream>
using namespace std;

void print(int *arr){
    for(int i=0;i<10;i++){
        cout<<arr[i]<<"   ";
    }
}
void insertionsort(int *array,int size){
    //iteration starts from index 1 and runs till size-1 or last index
    //inner iteration starts from i-1 and runs till the beginning index
    //temporary variable store the value that needs to be compared
    //the inner loop runs till the temporary variable is less then the inner iteration values and break if it is greater
    for(int i=1;i<size;i++){
            int temp=array[i];
            int j=i-1;
            while(j>=0&&array[j]>temp){
                array[j+1]=array[j];
                j--;
        }
             array[j+1]=temp;
    }
    print(array);
}

int main(){
    cout<<"Insertion sort"<<endl;
    int array[10]={30,40,20,10,5,6,4,70,80,55};
    cout<<"Unsorted array              : ";
    print(array);
    cout<<endl;
    cout<<"Sorted array by insertion sort : ";
    insertionsort(array,10);
}


