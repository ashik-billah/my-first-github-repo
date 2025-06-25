#include<bits/stdc++.h>
//First come first serve
using namespace std;

int main()
{
    int p;
    cout << "Enter the number of process : ";
    cin >> p;
    int bt[10],arrt[10],wt[10],tat[10],avwt=0,avtat=0;
    int i=0,j=0;
    while(i<p)
    {
        cout << "P[" << i+1 << "] arrival time : ";
        cin >> arrt[i];
        cout << "P[" << i+1 << "] brust time : ";
        cin >> bt[i];
        i++;
    }
    cout << endl;
    wt[0]=0,i=1;
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
    for(int i=0; i<p ; i++)
    {
        tat[i] = wt[i] + bt[i];
        avtat+=tat[i];
        avwt+=wt[i];
    }
    cout << "\t bt \t wt \t tat" << endl;
    cout << "\t -- \t -- \t ---" << endl;
    for(int i=0 ; i<p ; i++)
    {
        cout << "P[" << i+1 <<"]: \t " << bt[i] <<"\t " << wt[i] <<"\t " << tat[i] << endl;
    }
    cout << "Average wt : " << (avwt/p) << endl;
    cout << "Average tat : " << (avtat/p) << endl;

}
