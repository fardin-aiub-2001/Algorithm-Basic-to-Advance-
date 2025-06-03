#include<iostream>
using namespace std;

int main(){
    int item[]={1,2,3,4,5,6};
    int weight[]={2,3,2,1,3,2};
    int value[]={10,12,14,20,21,15};
    int capacity=7;

    int box[7][8];//box is of total item 7 (0->6)//capacity 8 0->7

    for(int i=0;i<=6;i++){
        for(int w=0;w<=capacity;w++){
            if(i==0||w==0){
                box[i][w]=0;
            }
            else if(weight[i-1]<=w){
                box[i][w]=max(value[i-1]+box[i-1][w-weight[i-1]],box[i-1][w]);
                }
            else{
                box[i][w]=box[i-1][w];
                }
            }
        }


        for(int i=0;i<=6;i++){
            for(int w=0;w<=capacity;w++){
                    cout<<box[i][w]<<"  ";
        }
        cout<<endl;
        }

    cout<<"Maximum value: "<<box[6][7]<<endl<<"Selected Item : ";

    int w=capacity;
    for(int i=6;i>0 && w>0;i--){
        if(box[i][w]!=box[i-1][w]){
            cout<<i<<" ";
            w=w-weight[i-1];
        }
    }
    }

