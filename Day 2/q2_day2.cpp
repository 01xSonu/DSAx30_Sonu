#include<iostream>
using namespace std;
void rotate(int arr[],int n){
    int last=arr[n-1];
   
    for(int i=n-1;i>0;i--){
        
       
        arr[i]=arr[i-1];
       
    }
    arr[0]=last;
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }

}
int main(){
    int arr[5]={1,2,3,4,5};
    rotate(arr,5);
    return 0;
}