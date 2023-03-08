#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the arrayManipulation function below.
long arrayManipulation(int n, vector<vector<int>> q) {
    // long long a[n+1]={};
    // for(long unsigned int i=0;i<queries.size();i++){
    //     long long int aa,bb,cc;
    //     aa=queries[i][0];
    //     bb=queries[i][1];
    //     cc=queries[i][2];
    //     if(aa<n+1)
    //     a[aa]+=cc;
    //     if(bb<n){
    //         a[bb+1]-=cc;
    //     }
       
    // }

    // long maxx=0;
    // long res=INT_MIN;
    // for(long i=0;i<n+1;i++){
    //     maxx+=a[i];
    //     res=max(maxx,res);
    // }
    // return res;

    // ///////// Method 2 /////
    int a[n]={};
    for (int i = 0; i < q.size(); i++)
    {
        long long int beg=q[i][0];
        long long int end=q[i][1];
        long long int val=q[i][2];
        a[beg-1]+=val;
        if(end<n)
        a[end]-=val;
    }
    long long int res=a[0];
    for (int i = 1; i < n; i++)
    {
        a[i]+=a[i-1];
        res=max(a[i],res);
    }
    return res;
    
    

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nm_temp;
    getline(cin, nm_temp);

    vector<string> nm = split_string(nm_temp);

    int n = stoi(nm[0]);

    int m = stoi(nm[1]);

    vector<vector<int>> queries(m);
    for (int i = 0; i < m; i++) {
        queries[i].resize(3);

        for (int j = 0; j < 3; j++) {
            cin >> queries[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    long result = arrayManipulation(n, queries);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
// int main(){
//     int n;
//     int q;
//     cin>>n>>q;
//     vector <vector<int>>;
//     for(int i=0;i<)
// }
