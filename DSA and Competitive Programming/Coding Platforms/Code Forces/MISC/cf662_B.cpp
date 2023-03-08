#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_set <int> square;
    unordered_set <int> rect;
    unordered_map <int,int> m;
    // vector <int> square;
    // vector <int> rect;
    int square =0;
    int rect=0;
    for (int i = 0; i < n; i++)
    {
        int data;
        cin>>data;
        m[data]++;
        if(m.count(data)>=2){
            rect.insert(data);
        }
        else if(m.count>=4) 
        {
            
        }
        

       
    }
    int k;
    while (k--)
    {
        int data;
        char sign;
        cin>>sign;
        cin>>data;

        if(sign=='-'){

        }
        else
        {
            
        }
        
        

        }
    }
    

    
    return 0;
}