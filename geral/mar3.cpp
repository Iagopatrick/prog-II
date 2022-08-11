#include <stdio.h>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;


#define ll long long




void soma(int n[], int li[]){
    int v[], ind[], j = 0;
    
    
    for (int i = 0; i < n[2]; i++){
        cin >> ind;
        v[i] = ind;
    }
    
    for (int j = 0; j < size(v); j++)
    {
        int sum = accumulate(li.begin(n[0]), li.end(n[1]), 0);
        cout << "sum of arr1 = " << sum << endl;
    }
    
   


}


int main(){
    int num[2], quo, lst[];
    cin >> num;
    cin >> lst;
    soma(num, lst)

    return 0;
}