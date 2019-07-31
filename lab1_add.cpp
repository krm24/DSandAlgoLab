#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

string sum_nos(string s1, string s2) 
{ 
    if (s1.length() > s2.length()) 
        swap(s1, s2); 
  

    string s3 = ""; 

    int n1 = s1.length(), n2 = s2.length(); 
  

    reverse(s1.begin(), s1.end()); 
    reverse(s2.begin(), s2.end()); 
  
    int c = 0; 
    for (int i=0; i<n1; i++) 
    { 

        int sum = ((s1[i]-'0')+(s2[i]-'0')+c); 
        s3.push_back(sum%10 + '0'); 
  

        c = sum/10; 
    } 
  
    for (int i=n1; i<n2; i++) 
    { 
        int sum = ((s2[i]-'0')+c); 
        s3.push_back(sum%10 + '0'); 
        c = sum/10; 
    } 

    if (c) 
        s3.push_back(c+'0'); 

    reverse(s3.begin(), s3.end()); 
  
    return s3; 
}

int main() 
{ 
    string str1 = "",str2="";
    cout<<"Enter two numbers \n";
    cin>>str1>>str2;
    cout << sum_nos(str1, str2)<<endl; 
    return 0; 
} 