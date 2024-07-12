#include<iostream>
#include<vector>
using namespace std;
void missingNum(vector<int>nums){
    int size=nums.size();
    int sum=0;
    for(int i=0; i<size; i++){
        sum= sum+nums[i];
    }
    int n=size+1;
    int total_sum= ((n)*(n+1))/2;
    int missingNum = (total_sum)-(sum);
    cout<<"missing number is : "<<missingNum;
}
int main(){
    vector<int>nums={1,2,3,4,5,6,7,8,9,11};

    missingNum(nums);
}