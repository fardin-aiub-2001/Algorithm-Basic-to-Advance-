#include<iostream>
using namespace std;
bool linearsearch(int *array,int ser){
    int count=0;
    for(int i=0;i<10;i++){
        if(array[i]==ser){
            count++;
        }
    }
    if(count==0){
        return false;
    }
    else{
        return true;
    }
}
void print(int *arr){
    for(int i=0;i<10;i++){
        cout<<arr[i]<<"   ";
    }
}
/*
Time complexity
best case= o(1)
avg case= sum(all cases) / number of cases
        =(1+2+3+4+5+6+7+8+9+10)/10
        =n(n+1)/2*n=n+1/2=11/2
worst case=o(n)
*/

int main(){
    cout<<"Linear Search"<<endl;
    int array[10]={30,40,20,10,5,6,4,70,80,55};
    cout<<"Array = ";
    print(array);
    cout<<endl<<"Enter the value you want to search : ";
    int ser;
    cin>>ser;
    bool result= linearsearch(array,ser);
    if(result==true){
        cout<<"Found...";
    }
    else{
        cout<<"Not found!!!";
    }
}

