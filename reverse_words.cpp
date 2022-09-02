// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

string reverse_fun(string str)
{
   reverse(str.begin(),str.end());
   cout<<str<<endl;
    str.insert(str.end(),' ');

    int n= str.length();
    int j=0;
    for(int i=0;i<n;i++){

        if(str[i] == ' '){
	    reverse(str.begin()+j,str.begin()+i);
	    j=i+1;
	}
}
str.pop_back();
// cout << str<<endl;
return str;
}


int main() 
{
string str = "Hi My name is sumit";
string output = reverse_fun(str);
cout<<output;


    return 0;
}
