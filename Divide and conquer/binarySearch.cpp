#include<iostream>
#include<vector>
#include<string>

int recuesiveBinarySearch(std::vector<int>& A, int left,int right, int x){

    if(left>right) return -1;

    int mid = (left +right)/2;

    if(A[mid] == x) return mid;

    if(x < A[mid]){
        return recuesiveBinarySearch(A, left, mid-1, x);
    }
    else{
        return recuesiveBinarySearch(A, mid+1, right, x);
    }
}

int binarySearch(std::vector<int>& A, int x){
    
    return recuesiveBinarySearch(A, 0, A.size()-1, x); 
}
int getNumber(){
    int x;
    std::cout<<"Enter a number: ";
    std::cin>>x;
    std::cout<<std::endl;
    return x;
} 
int main(){
    std::vector<int> A = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49};

    int num1{getNumber()};
    int num2{getNumber()};
    int index;
    index = binarySearch(A, num1);
    std::cout<<"The number "<<num1<<" is "<<((index==-1)?" not found ":"found at index ")<< index<<"."<<std::endl;
    index = binarySearch(A, num2);
    std::cout<<"The number "<<num2<<" is "<<((index==-1)?" not found ":"found at index ")<< index<<"."<<std::endl;

    return 0;
}