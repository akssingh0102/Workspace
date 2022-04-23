#include <bits/stdc++.h>

using namespace std;

// Complete the makingAnagrams function below.
int makingAnagrams(string s1, string s2) {

    int a[26]={};
    for(long unsigned int i=0;i<s1.length();i++){
        a[s1[i]-'a']++;
    }
    for(long unsigned int i=0;i<s2.length();i++){
        a[s2[i]-'a']--;
    }
    int count =0;
    for(int i=0;i<26;i++){
        count+=abs(a[i]);
    }

    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = makingAnagrams(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}
