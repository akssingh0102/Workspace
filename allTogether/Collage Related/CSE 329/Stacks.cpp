#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
const int n=5;

class stacks{
    private:
    int top;
    int a[n];
    public:

    stacks(){
        top=-1;
    }

    void push(int data){   // insert 
        if(isEmpty()){
            a[++top]=data;
        }
        else
        {
            cout<<"Over Flow"<<endl;
        }
        
        

    }

    void pop(){          //Delete
        if(top==-1){
            cout<<"Under Flow"<<endl;
        }
        else
        {
            top--;
        }
        
    }

    bool isEmpty(){
        if(top==n-1){
            return false;
        }
        else
        return true;
    }

    int tPrint(){
        return a[top];
    }

};

int main(){
    stacks s;
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(1000);
    s.pop();
    s.push(67);
    
    
    cout<<s.tPrint()<<endl;
        
    return 0;
}