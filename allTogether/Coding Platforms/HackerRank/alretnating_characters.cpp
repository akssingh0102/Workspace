#include <bits/stdc++.h>

using namespace std;

// Complete the alternatingCharacters function below.
int alternatingCharacters(string s) {
    int len=s.length();
    int a=0;
    int b=0;
    for (int i = 0; i < len; i++)
    {
        if (s[i]=='A')  
        {
            /* code */
            a++;
        }
        if (s[i]=='B')
        {
            b++;
        }
        
        
    }
    cout<<min(a,b)<<endl;
    
    


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = alternatingCharacters(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
