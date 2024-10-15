#include<iostream>
#include<vector>
#include<map>
int distinct_numbers(std::vector<int> &v){
    std::map<int,int> mp;
    for(auto i:v){
        mp[i]++;
    }
    return mp.size();
}

int main(){
    int n;
    std::cin>>n;
    std::vector<int> v(n);
    for(int i=0;i<n;i++){
        std::cin>>v[i];
    } 
    int result=0;
    result=distinct_numbers(v);
    std::cout<<result<<std::endl;
}