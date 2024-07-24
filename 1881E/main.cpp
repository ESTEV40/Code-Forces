#include <bits/stdc++.h>

using namespace std;

int main(){

    int N;
    int cases;

    cin >> cases;
    while(cases--){
        cin >> N;
        vector<int> C(N+1);
        vector<int> Res(N+2);

        for(int i = 1; i <= N; i++) 
            cin >> C[i]                  ;

        Res[N + 1] = 0;

        for(int i = N; i>0; i--){
            if(C[i] > N-i) Res[i] = 1+ Res[i+1]; 
            else Res[i] = min(Res[C[i]+i+1], Res[i+1]+1);
        }
        cout << Res[1] << endl;
    }
}