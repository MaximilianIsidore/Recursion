#include<iostream>
#include<string>

std::string stringReverse(std::string input){
    if(input.empty() || input.length()==1){
        return input;
    }

    return stringReverse(input.substr(1)) + input[0];
}

void getString(std::string& input){
    std::cout<<"Enter a string :";
    getline(std::cin,input);
    std::cout<<std::endl;
}

int main(){
    std::string s1,s2;

    getString(s1);
    getString(s2);

    std::cout<<"Reversed string of "<<s1<<" is "<< stringReverse(s1)<<std::endl;
    std::cout<<"Reversed string of "<<s2<<" is "<< stringReverse(s2)<<std::endl;

    
    return 0;
}