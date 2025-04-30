#include<bits/stdc++.h>
//Round Robin
using namespace std;

int main()
{
    int p,q;
    cout << "Enter the number of process : ";
    cin >> p;
    cout << "Enter the time Quantum : ";
    cin >> q;
    int bt[10],rem_bt[10],wt[10],tat[10],avwt=0,avtat=0;
    int i=0,sq=0,temp_qt,cnt=0;
    while(i<p)
    {
        cout << "P[" << i+1 << "] brust time : ";
        cin >> bt[i];
        rem_bt[i]=bt[i];
        i++;
    }
    cout << endl;

    while(1)
    {
        for(int i=0; i<p ; i++)
        {
            temp_qt = q;
            if(rem_bt[i]==0)
            {
                cnt++;
                continue;
            }
            if(rem_bt[i]>q)
            {
                rem_bt[i] = rem_bt[i] - q ;
            }
            else{
                if(rem_bt[i]>0 || rem_bt[i]<=q)
                {
                    temp_qt =q-rem_bt[i];
                    rem_bt[i]=temp_qt;
                }
                sq += temp_qt;
                tat[i]=sq;
            }
        }
        if(cnt == p)
        {
            break;
        }
    }
    for(int i=0; i<p ; i++)
    {
        wt[i] = tat[i] - bt[i];
        avwt+=wt[i];
        avtat+=tat[i];
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
