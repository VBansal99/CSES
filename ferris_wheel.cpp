#include<iostream>
#include<algorithm>

int main(){
    int n;
    std::cin>>n;
    int maximum_weight=0;
    std::cin>>maximum_weight;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    int count=0;
    std::sort(arr,arr+n);
    [&]()->void{
        int i=0;
        int j=n-1;
        while(i<=j){
            if(arr[i]+arr[j]<=maximum_weight){
                i++;
            }
            j--;
            count++;
        }
    }();
    std::cout<<count;
}