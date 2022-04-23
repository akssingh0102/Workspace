#include<bits/stdc++.h> 
using namespace std; 



string ns; 

void sortStackHelper(char x,stack<int> &st) 
{ 

	if(st.size() == 0) 
	st.push(x); 

	else
	{ 
		if(x > st.top()){
		int a = st.top(); 
		st.pop(); 
		sortStackHelper(x,st); 

		st.push(a); 
        }
        else{
            st.push(x);
            return;
        }
	} 
} 

void sortStack(stack<int> &st) 
{ 
	if(st.size()>0) 
	{ 
		
		int x = st.top(); 
		st.pop(); 
		sortStack(st); 
		
		sortStackHelper(x,st); 
	} 
} 

void printStack(stack<int> st){
    while(st.size()){
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main() 
{ 
    stack<int> st; 
	
	st.push(3);
    st.push(5);
    st.push(7);
    st.push(1);
    st.push(2);
    st.push(4);
    st.push(6);
    printStack(st);
    cout<<endl;

    sortStack(st);

    printStack(st);



	return 0; 
} 

