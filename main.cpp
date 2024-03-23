#include <iostream>
#include<string>
using namespace std;

string NumSum(string& num1, string& num2){
     string result;

     int i=num1.size()-1;
    int j=num2.size()-1;
    int carry=0;

    while(i>=0||j>=0||carry!=0){
        int dig1,dig2;
        if(i>=0){
            dig1=num1[i]-'0';
        }
        else{
            dig1=0;
        }
        if(j>=0){
            dig2=num2[j]-'0';
        }
        else{
            dig2=0;
        }
        int sum=dig1+dig2+carry;
        carry=sum/10;
        result=char(sum % 10+'0')+result;
        i--;
        j--;

    }
    return result;
}

string NumSub(string& num1, string& num2){

}
int main(){

    string num1,num2;

    cout<<"First number  >> ";
    cin>>num1;
    cout<<"Second number >> ";
    cin>>num2;
    
    string result=NumSum(num1,num2);
    
    cout<<"Sum           >> "<<result<<endl;

    

    
    

        



}