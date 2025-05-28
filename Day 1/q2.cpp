#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        for(int j=0;j<N-i;j++){
            cout<<" ";
        }
        char ch ='A';
        int bre =(2*i+1)/2;
        for(int j=0;j<2*i+1;j++){
            cout<<ch;
        if(j<bre)
        ch++;
        else
        ch--;
        }
        for(int j=0;j<N-i;j++){
            cout<<" ";
        }
         cout<<endl;

    }
   
    return 0;
}