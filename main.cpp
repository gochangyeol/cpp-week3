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

    string result;
    bool minus=false;

    if(num1.size() < num2.size() || (num1.size() == num2.size() && num1 < num2)){
        minus=true;
        swap(num1,num2);
    }
    
    int i=num1.size()-1;
    int j=num2.size()-1;
    int borrow=0;

    while(i>=0||j>=0||borrow!=0){
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
        dig1 -= borrow;
        borrow = 0;
        if (dig1 < dig2) {
            dig1 += 10;
            borrow = 1;
        }

        int diff = dig1 - dig2;

        
        result=char(diff%10+'0')+result;
        i--;
        j--;

    }
    while(!result.empty()&&result[0]=='0'){
        result.erase(0,1);
    }
    if (minus && !result.empty() && result != "0") {
        result = '-' + result;
    }
    return result;


}
int main(){

    string num1,num2;

    cout<<"First number  >> ";
    cin>>num1;
    cout<<"Second number >> ";
    cin>>num2;
    
    string result=NumSum(num1,num2);
    string result2=NumSub(num1,num2);

    cout<<"Sum           >> "<<result<<endl;
    cout<<"Sub           >> "<<result2<<endl;

    

    
    

        



}