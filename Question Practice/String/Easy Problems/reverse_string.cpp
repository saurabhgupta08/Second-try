#include <bits/stdc++.h>
using namespace std;

void reverse(string &s){
    int n=s.size();
    cout<<n<<endl;
    int low=0;
    int high=n-1;
    while (low<high)
    {
        char temp=s[low];
        s[low]=s[high];
        s[high]=temp;

        low++;
        high--;
    }
    
}

int main(){

    string name ="Saurabh";
    reverse(name);
    cout<<name<<endl;
    return 0;
}