#include<iostream>
using namespace std;

void selectionSort(int array[][100],int size){
    for(int i=0;i<size-1;i++){
        int min_index=i;
        for(int j=i+1;j<size;j++){
            if(array[j][size-1-j]<array[min_index][size-1-min_index]) {
                min_index = j;
            }
        }

        int temp=array[i][size-1-i];
        array[i][size-1-i]=array[min_index][size-1-min_index];
        array[min_index][size-1-min_index]=temp;
    }
}

int main() {
    int r;
    cout<<"Enter the Row and Column of the matrix: ";
    cin>>r;

    int array[100][100];

    cout<<"Enter elements for the array:"<<endl;
    for(int i=0;i<r;i++) {
        for(int j=0;j<r;j++){
            cout<<"["<<i<<"]["<<j<<"]: ";
            cin>>array[i][j];
        }
    }

    cout<<"\nOriginal Matrix:\n";
    for(int i=0;i<r;i++) {
        for(int j=0;j<r;j++){
            cout<<array[i][j]<<"   ";
        }
        cout<<endl;
    }

    selectionSort(array, r);

    cout<<"\n Matrix after sorting secondary diagonal: \n";
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            cout<<array[i][j]<<"  ";
        }
        cout<<endl;
    }

    return 0;
}
