#include<iostream>
#include<algorithm>
int calculate(int arr[],int arr2[], int k,int n,int m){
    std::sort(arr,arr+n);
    std::sort(arr2,arr2+m);
    int i=0 ,j=0;
    int count=0;
    while(i<n && j<m){
        if(abs(arr[i]-arr2[j])<=k){
            count++;
            i++;
            j++;
        }else if(arr[i]>arr2[j]){
        j++;}
        else{
        i++;
        }
    }
    return count;
}
int main(){
    int number_of_applicants=0;
    int number_of_apartments=0;
    int difference=0;

    std::cin>>number_of_applicants>>number_of_apartments>>difference;

    int arr[number_of_applicants];
    for(int i=0;i<number_of_applicants;i++){
    std::cin>>arr[i];
    }
    int arr2[number_of_apartments];
    for(int i=0;i<number_of_apartments;i++){
        std::cin>>arr2[i];
    }
    std::cout<<calculate(arr,arr2,difference,number_of_applicants,number_of_apartments)<<std::endl;
}