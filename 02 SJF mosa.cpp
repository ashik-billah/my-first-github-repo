#include<bits/stdc++.h>
// Shortest Job First
using namespace std;

int main()
{
    int p;
    cout << "Enter the number of process : ";
    cin >> p;
    int arrt[10],bt[10],wt[10],tat[10],i=0,j=0;
    float avwt=0, avtat=0;

    while(i<p)
    {
        cout << "P[" << i+1 << "] arrival time : ";
        cin >> arrt[i];
        cout << "P[" << i+1 << "] brust time : ";
        cin >> bt[i];
        i++;
    }
    sort(arrt,arrt+p);
    sort(bt,bt+p);

    wt[0]=0,i=1,j=0;
    while(i<p)
    {
        wt[i]=0;
        while(j<i)
        {
            wt[i]+=bt[j];
            j++;
        }
        j=0;
        i++;
    }
    for(i=0;i<p;i++)
    {
        tat[i]=bt[i]+wt[i];
        avtat+=tat[i];
        avwt+=wt[i];
    }
    cout << endl;
    cout << "\t bt \t wt \t tat " << endl;
    cout << "\t -- \t -- \t --- " << endl;

    for(i=0 ; i<p ; i++)
    {
        cout << "P[" << arrt[i] << "] : \t" << bt[i] << "\t " << wt[i] << "\t " << tat[i] << endl;
    }
    cout << "Average wt : " << (avwt/p) << endl;
    cout << "Average tat : " << (avtat/p) << endl;
}
