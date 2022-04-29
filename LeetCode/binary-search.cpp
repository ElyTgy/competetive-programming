#include <bits/stdc++.h>
using namespace std;

int searchLoop(vector<int>& nums, int target) {
    long long low=0; long long high=nums.size()-1;
    while(low <= high){
        long long mid = (low+high)/2;
        if(nums[mid]==target){
            return mid;
        }
        if(nums[mid] < target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;
}

int searchRecursion(vector<int>& nums, int target, int low, int high){
    long long mid = (low+high)/2;
    if(low > high){return -1;}
    if(nums[mid]==target){
        return mid;
    }
    if(nums[mid] < target){
        searchRecursion(nums, target, mid+1, high);
    }
    else{
        searchRecursion(nums, target, low, mid-1);
    }
}