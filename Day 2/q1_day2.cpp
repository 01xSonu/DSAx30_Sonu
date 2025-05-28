#include<iostream>
using namespace std;
pair <int,int> target(int nums[],int n,int target){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target ){
                return {i,j};
            }
        }

    }
    return {-1,-1};
}
int main(){
    int num[5]={2,7,11,15};
    pair<int,int> result=target(num,5,9);
    if(result.first!=-1){
        cout<<"["<<result.first<<","<<result.second<<"]"<<endl;
    }

    return 0;
}