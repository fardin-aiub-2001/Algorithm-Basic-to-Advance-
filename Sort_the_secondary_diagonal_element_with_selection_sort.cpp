#include<iostream>
using namespace std;

void selectionSort(int *array,int size){
    for(int i=0;i<size-1;i++){
            int min=array[i];
            int k=i;
        for(int j=i+1;j<size;j++){
            if(min>array[j]){
                k=j;
                min=array[j];
            }
        }
        int temp=array[i];
        array[i]=array[k];
        array[k]=temp;
    }
}


int main(){
    cout<<"Enter the Row and Column Of the matrix: "<<endl;
    int r;
    cin>>r;
    int array[r][r];
    cout<<"Enter element for the array:";
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            cout<<"["<<i<<"]"<<"["<<j<<"]";
            cin>>array[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            cout<<array[i][j]<<"   ";
        }
        cout<<endl;
    }
    int ar[r];
    int count =0;
    cout<<"Secondary Diagonal element:";
    for(int i=0;i<r;i++){

       ar[count]=array[i][r-1-i];
       count++;
    }

    for (int i=0;i<r;i++){
        cout<<ar[i]<<" " ;
    }
    cout<<endl;

   selectionSort(ar,r);
   count=0;
   for(int i=0;i<r;i++){

       array[i][r-1-i]=ar[count];
       count++;
    }


    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            cout<<array[i][j]<<"   ";
        }
        cout<<endl;
    }

}
