// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
vector<int> formatArray(vector<int> a,int n);
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		vector<int>  b;
		b=formatArray(a,n);
		int flag=1;
		if(b.size()==n){
			for(int i=1;i<n;i+=2)
				if(b[i]<b[i-1])
					flag=0;
			if(flag==0)
				cout<<"0\n";
			else{
				sort(a.begin(),a.end());
				sort(b.begin(),b.end());
				for(int i=0;i<n;i++){
					if(a[i]!=b[i])
						flag=0;
				}
				cout<<flag<<endl;
			}
		}
		else
			cout<<"0\n";
	}
}// } Driver Code Ends


/*Complete the function below*/
vector<int> formatArray(vector<int> a,int n)
{
    int half=n/2;
    int i=0,j=1,k=0;
    while(i<n && j<n){
        if(a[i]>a[j]){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        i+=2;
        j+=2;
        
    }
    return a;
    
}