#include<iostream>
#include<string>

bool isPalindrome(std::string input){
    int length = input.length();
    if(length==1 || length==0){
        return true;
    }
    
    if(input[0] == input[length-1]){
        return isPalindrome(input.substr(1,length-2));
    }

    return false;
}
void getString(std::string& input){
    std::cout<<"Enter a string or a number:";
    getline(std::cin,input);
    std::cout<<std::endl;
}

int main(){
    std::string s1,s2;

    getString(s1);
    getString(s2);

    std::cout<<"palindrome  of "<<s1<<" is "<< isPalindrome(s1)<<std::endl;
    std::cout<<"palindrome  of "<<s2<<" is "<< isPalindrome(s2)<<std::endl; 
    return 0;
}