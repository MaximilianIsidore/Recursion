#include<iostream>
#include<string>

std::string findBinaryRecursive(int num, std::string result){
    if(num == 0) return result;
    
    result = std::to_string(num%2) + result;
    return findBinaryRecursive(num/2, result);

}
std::string findBinary(int num){
    return findBinaryRecursive(num,"");
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

    std::cout<<"Binary equivalent of "<<num1<<" is "<<findBinary(num1)<<std::endl;
    std::cout<<"Binary equivalent of "<<num2<<" is "<<findBinary(num2)<<std::endl;

    return 0;
}