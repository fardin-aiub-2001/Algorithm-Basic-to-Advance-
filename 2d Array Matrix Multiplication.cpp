#include<iostream>
using namespace std;
int main(){
    //declaration 1
    int mat[4][3]={
    {1,2,3},
    {4,5,6},
    {7,8,9},
    {10,11,12}
    };
    //declaration 2
    int matt[3][2]={1,2,3,4,5,6};

    int mul[4][2];

    int val=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<3;k++){
                val=val+(mat[i][k]*matt[k][j]);
            }
            mul[i][j]=val;
            val=0;
        }

    }

    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            cout<<mul[i][j]<<"  ";
        }
        cout<<endl;
    }
}
