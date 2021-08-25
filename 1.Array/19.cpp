/*Common elements */

vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            vector<int> sol;
            unordered_set<int> ump1,ump2,ump3;
            for(int i=0;i<n1;i++)
                ump1.insert(A[i]);
            for(int i=0;i<n2;i++)
                ump2.insert(B[i]);
            for(int i=0;i<n3;i++)
                ump3.insert(C[i]);
            
            for(auto a:ump1)
            {
                if(ump2.count(a) && ump3.count(a))
                    sol.push_back(a);
            }
            sort(sol.begin(),sol.end());
            return sol;
        }