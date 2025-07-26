#include<iostream>
using namespace std;

int main(){
    string x="CHARACTERISTIC";
    string y="CHARMING";

    cout<<x<<endl<<y<<endl;

    int a=x.length();
    int b=y.length();
    int ar[a+1][b+1];

    for(int i=0;i<=a;i++){
        for(int j=0;j<=b;j++){
            if(i==0||j==0){
                ar[i][j]=0;
            }
            else if(x[i-1]==y[j-1]){
                ar[i][j]=ar[i-1][j-1]+1;
            }
            else{
                ar[i][j]=max(ar[i-1][j], ar[i][j-1]);
            }
        }
    }//time complexity=mxn
    cout<<"Printing Lcs Table:"<<endl;
    for(int i=0;i<=a;i++){
        for(int j=0;j<=b;j++){
                cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Printing Lc Sequence: "<<ar[a][b];
    int i=a,j=b;
    string lcs="";
    while(i>0&&j>0){
        if(x[i-1]==y[j-1]){//If characters match, add to LCS
            lcs=x[i-1]+lcs;
            i--;
            j--;
        }
        else if(ar[i-1][j]>ar[i][j-1]){// Move up
            i--;
        }
        else{//Move left
            j--;
        }
    }
    cout<<endl<<"Longest Common Subsequence: "<<lcs;



}
