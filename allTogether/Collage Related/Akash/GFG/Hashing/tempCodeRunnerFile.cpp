#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string s;
    cin>>s;
    int a[5]={0};
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='c'){a[0]++;}
        else if(s[i]=='o'){a[1]++;}
        else if(s[i]=='v'){a[2]++;}
        else if(s[i]=='i'){a[3]++;}
        else if(s[i]=='d'){a[4]++;}
    }
    int minn=a[0];
    for (int i = 0; i < 5; i++)
    {
        minn=min(minn,a[i]);
    }
    cout<<minn;
    
    

    return 0;
}