
 #include <bits/stdc++.h>


using namespace std;
char thwword[101];
int len=0;
void result(){
    cout<<thwword[0]<<(len-2)<<thwword[len-1]<<'\n';
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>thwword;
    len=strlen(thwword);

    if(len>10){
        result();
    }
    else{
    cout<<thwword<<'\n';

    }
    }

    return 0;
}
