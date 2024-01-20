#include<bits/stdc++.h> 
using namespace std;
int main() {
    int n; cin>>n;
    int scores[n];
    int answer=0;
    for (int i = 0; i < n; i++)
    {
        cin>>scores[i];
    }
    int max_score =scores[0], min_score = scores[0];

    for (int i = 0; i < n; i++)
    {
        if(i==0) continue;

        if(scores[i]>max_score){
            max_score = scores[i];
            answer++;
        }
        if(scores[i]<min_score){
            min_score = scores[i];
            answer++;
        }
    }
    
    cout<<answer<<endl;
    return 0;
}