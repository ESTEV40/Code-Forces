#include <bits/stdc++.h>

using namespace std;

typedef long int li;

li modulo(li x){
    return x>=0 ? (x) : -(x);
}

int main(){
    
    li N, Save_Number = 0, aux;
    li ind = 0;

    while(cin >> N){

        vector<li> numeros;
        cin >> aux;
        numeros.push_back(aux);
        Save_Number = modulo(numeros[0]);

        for(li i = 1; i < N; i++ ){

            cin >> aux;
            numeros.push_back(aux);
            if(modulo(numeros[i]) < Save_Number){
                ind = i;
                Save_Number = modulo(numeros[i]);
            }

        }
        cout << modulo(numeros[ind]) << endl;
//        numeros.clear();
    }

    return 0;
}