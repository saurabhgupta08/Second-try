#include <bits/stdc++.h>
using namespace std;


int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.emplace_back(4);
    v.emplace_back(5);



    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4);


    vector<int>v1(5,100);
    vector<int>v2(5);

    vector<int>v3(5,20);
    vector<int>v4(v3);


    cout<< v4[0] <<endl;

    vector<int>::iterator it= v1.begin();  // here "it" pointing the adress where vector started.
    cout<<*it<<endl;   // by writing * we can access the value store at that pointing adress.

    // vector<int>::iterator it= v1.end();  
            // here it is not pointing on last element stored address its poiting plus one address of last element pointing address    


    // vector<int>::iterator it= v1.rend();     never used
    // vector<int>::iterator it= v1.rbegin();   never used


    //printing vector
    for(vector<int>::iterator it = v.begin();it !=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    for(auto it = v.begin();it !=v.end();it++){  //auto will automaticly assing datatype according to stored datatype
        cout<<*it<<" ";
    }
    cout<<endl;

    //for each loop
    for(auto iter : v){
        cout<<iter<<" ";
    }
    cout<<endl;

    //erase 
    v1.erase(v1.begin()); // it will erase the element where we pointing 

    v1.erase(v1.begin(),v1.begin()+2);  // to erase a range (start ,end )

    //insert
    v.insert(v.begin(),300);
    v.insert(v.begin()+1,2,10);
    for(auto iter : v){
        cout<<iter<<" ";
    }
    cout<<endl;


    cout<<v.size()<<endl;  //it gives the number of element 

    v.pop_back(); //it will remove element from back

    //v1{1,2}   v2{8,9}
    v1.swap(v2); //v1{8,9}, v2{1,2} // it will swap the elements of both the element 

    cout<<v.empty()<<endl; // it will shows it is empty or not 

}