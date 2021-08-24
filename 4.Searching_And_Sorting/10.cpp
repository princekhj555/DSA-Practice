/*Find Pair Given Difference*/

bool findPair(int arr[], int size, int n){
    set<int> ump;
    for(int i=0;i<size;i++)
    {
        if(ump.find(n+arr[i])==ump.end())
         ump.insert(arr[i]);
         else return true;
    }
    for(int i=0;i<size;i++)
    if(ump.find(n+arr[i])!=ump.end())
         return true;
    return false;
}