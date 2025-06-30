#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int pg[n];
    for(auto &x : pg) cin >> x;
    int f; cin >> f;

    unordered_set<int> fset;
    deque<int> fq;
    int hit = 0;

    for(int i = 0; i < n; i++)
    {
        if(fset.find(pg[i]) != fset.end())
        {
            hit++;
        }
        else
        {
            if(fq.size() == f)
            {
                int rmv = fq.front();
                fq.pop_front();
                fset.erase(rmv);
            }

            fq.push_back(pg[i]);
            fset.insert(pg[i]);
        }
    }

    cout << "Hit " << hit << endl;

    return 0;
}
