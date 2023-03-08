#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the pageCount function below.
 */
int pageCount(int n, int p) {
    int page_count=0;
    if(p<=abs(n-p)){
        int index=0;
        while (index<p)
        {
            page_count++;
            index+=2;
        }
        
    }
    else{
        int index=n;
        while (index>)
        {
            /* code */
        }
        
    }
    

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}
