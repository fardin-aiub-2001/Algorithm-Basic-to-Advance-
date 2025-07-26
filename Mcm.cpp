#include <iostream>
using namespace std;


void printParenthesis(int i,int j,int** s,char& name) {
    if(i==j){
        cout<<name++;
        return;
    }
    cout<<"(";
    printParenthesis(i,s[i][j],s,name);
    printParenthesis(s[i][j]+1,j,s,name);
    cout<<")";
}

void matrixChainOrder(int d[],int n){
    int** M=new int*[n];//pointer is pointing another pointer
    int** s=new int*[n];

    for(int i=0;i<n;i++){
        M[i]=new int[n];
        s[i]=new int[n];
    }

    for(int i=1;i<n;i++){//Single matrix, so no multiplication
        M[i][i]=0;
    }

    for(int len=2;len<n;len++){//len=chain length
        for(int i=1;i<n-len+1;i++) {
            int j=i+len-1;
            M[i][j]=1e9; //Using a large integer instead of INT_MAX
            for(int k=i;k<j;k++){//all possible splits
                int q=M[i][k]+M[k+1][j]+d[i-1]*d[k]*d[j];//Cost formula
                if(q<M[i][j]){//Update minimum cost
                    M[i][j]=q;
                    s[i][j]=k;//best partition
                }
            }
        }
    }

    cout<<"Minimum number of multiplications: "<<M[1][n-1]<<endl;
    cout<<"Optimal Parenthesization: ";
    char name='A';// Matrix labels
    printParenthesis(1,n-1,s,name);
    cout<<endl;

    // Cleanup dynamic allocation
    for(int i=0;i<n;i++) {
        delete[] M[i];
        delete[] s[i];
    }
    delete[] M;
    delete[] s;
}

int main() {
    int d[]={4,3,4,2,6,3}; // Example matrix dimensions
    int n=6;

    matrixChainOrder(d,n);
    return 0;
}
