#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         unordered_map <char,int> str_fre;
//         unordered_map <char,int> patter_fre;
//         string str,pattern;
//         // vector <char> strr;
//         int strr[26];
//         cin>>str;
//         cin>>pattern;
//         for(int i=0;i<str.length();i++){
//             str_fre[str[i]]++;
//             // strr.push_back(str[i]);
//             strr[str[i]-'a']++;
//         }
//         for (int i = 0; i < pattern.length(); i++)
//         {
//             patter_fre[pattern[i]]++;
//             strr[pattern[i]-'a']--;

//         }
//         string neww;
//         for(int i=0;i<26;i++){
//             //while (strr[i])   //commnted
//             for(int j=0;j<strr[i];j++)
//             {
//                 neww.push_back((char)('a'+i));
//                 strr[i]--;  //added
//             }
            
//         }
//         sort(neww.begin(),neww.end());
//         if(neww.length()==1){
//             cout<<neww<<endl;
//         }
//         else{

        
//         for(int i=0;i<neww.length();i++){
//             if(neww[i]>pattern[0]){
//                 cout<<pattern;
//             }
//             cout<<neww[i];
//         }
//         cout<<endl;

//         }


        

//     }
//     return 0;
// }
int main(){
    int t;
    cin>>t;
    while(t--){

    string s,pattern;
    cin>>s;
    cin>>pattern;
    int fre[26]={};
    for(int i=0;i<s.length();i++){
        fre[s[i]-'a']++;

    }
    int pat_min=INT_MAX;
    int pat_max_pos=INT_MAX;
    char data=pattern[0];
    for (int i = 0; i < pattern.length(); i++)
    {
        if(pattern[i]>data){
            pat_max_pos=i;
            data=pattern[i];
        }
        

        fre[pattern[i]-'a']--;
        pat_min=min(pat_min,(pattern[i]-'a'));
    }
    //vector <char> neww;                              //changing
    string neww;
    for(int i=0;i<26;i++){
        while(fre[i]){
            neww.push_back('a'+i);
            fre[i]--;
        }
    }

    sort(neww.begin(),neww.end());
    bool flag = false;
    // ///////////////
    // cout<<"New :";
    // for(int i=0;i<neww.size();i++){
    //     cout<<neww[i];
    // }
    // cout<<endl;
    // ///////////////
    // cout<<endl<<"New ::"<<neww<<endl;

    if(s.length()==1){
        cout<<s;
    }
    else if(s.length()==pattern.length()){
        cout<<pattern;
    }
    else{

    
    for(int i=0;i<neww.size();i++){
        /////
        if(neww[i]==pattern[0]){  
            // cout<<"pat_max_pos"<<pat_max_pos<<endl;      
            // int nn= (neww.length()-1);        
            // int zz=min((i+pat_max_pos),nn);
            // char aaa=neww[zz];
            // cout<<"S1  == "<<pattern+neww.substr(i,neww.length())<<endl;
            // cout<<"S2  == "<<neww[i]+pattern+neww.substr(i+1,neww.length())<<endl;
            // cout<<endl<<"POKI === "<<neww.substr(i,neww.length())<<endl;
           
        if(pattern+neww.substr(i,neww.length()-1) < neww[i]+pattern+neww.substr(i+1,neww.length()-1)){      ///Make  this  
            //cout<<11111111;
                cout<<pattern;
                flag=true;
        }   //added new
        }
        ////
        if((neww[i]>pattern[0] /*|| neww[i]>=pat_max*/)&& flag==false){
            
            cout<<pattern; 
            flag=true;
            i--;  // new commit
        }
        else
        {
            cout<<neww[i];
        }
        if(i==neww.size()-1){
            if(flag==false){
                cout<<pattern;
            }
        }
        
    }
    }
    cout<<endl;
    

    }

    return 0;

}