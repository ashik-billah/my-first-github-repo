
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n; cin >> n;
    int pg[n]; for(auto &x : pg) cin >> x;
    int f; cin >> f;

    vector<int> fs;
    int hit = 0;
    for(int i = 0; i < n; i++)
    {
        if(find(fs.begin(), fs.end(), pg[i]) != fs.end())
        {
            hit++;

            fs.erase(find(fs.begin(), fs.end(), pg[i]));
            fs.push_back(pg[i]);
        }
        else
        {
            if(fs.size() == f)
                fs.erase(fs.begin());

            fs.push_back(pg[i]);
        }
    }

    cout << "Hit " << hit << endl;

    return 0;
}

//20
//4
// 7 0 1 2 0 3 0 4 2 3 0 3 2 1 2 0 1 7 0 1
// Hit 12 Fault 8
