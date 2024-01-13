#include<iostream>
#include<string>

int recursiveSummation(int n){
    if(n<=1) return n;

    return n + recursiveSummation(n-1);

}

int summation(int n){
    return recursiveSummation(n);
}

int getNumber(){
    int x;
    std::cout<<"Enter a number: ";
    std::cin>>x;
    std::cout<<std::endl;
    return x;
}

int main(){
    int num1{getNumber()};
    int num2{getNumber()};

    std::cout<<"summation of "<<num1<<" is "<<summation(num1)<<std::endl;
    std::cout<<"summation of "<<num2<<" is "<<summation(num2)<<std::endl;

    return 0;
}