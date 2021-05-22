//To find the 1st and last occurence of an element in an sorted array
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
vector<int> find(int a[], int n , int x );
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}

// } Driver Code Ends


vector<int> find(int a[], int n , int x )
{
    vector<int> index;
    for(int i=0;i<n;i++)
        if(a[i]==x)
        { index.push_back(i); 
        break;}
    for(int i=n-1;i>=0;i--)
        if(a[i]==x)
        {index.push_back(i);
        break;}
        if(index.empty()==true){
            index.push_back(-1);
            index.push_back(-1);
        }
    return index;
}