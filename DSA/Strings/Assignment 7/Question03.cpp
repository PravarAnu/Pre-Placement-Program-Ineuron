#include <iostream>
#include <vector> 
#include <algorithm>
#include <unordered_set>
using namespace std;

string addStrings(string num1, string num2) {
        int carry = 0;
        string ans;

        int num1High = num1.size()-1;
        int num2High = num2.size()-1;

        while(num1High>=0 && num2High>=0){
            int numOne = num1[num1High] - '0';
            int numTwo = num2[num2High] - '0';

            int sum = numOne+numTwo+carry;
            carry = sum/10;
            sum = sum%10;

            ans.push_back('0'+sum); 

            num1High--;
            num2High--;

        }

        while(num1High>=0){
            int numOne = num1[num1High] - '0';
            int sum = numOne+carry;
            carry = sum/10;
            sum = sum%10;
            
            ans.push_back('0'+sum);

             num1High--;
        }

        while(num2High>=0){
            int numTwo = num2[num2High] - '0';
            int sum = numTwo+carry;
            carry = sum/10;
            sum = sum%10;
            
            ans.push_back('0'+sum);
            
            num2High--;
        }

        if(carry > 0){
            ans.push_back('0'+carry);
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }