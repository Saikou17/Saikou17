using namespace std;
#include <iostream>
#include <algorithm>
#include <vector>

//* Metodo Divide y Conquista *//

// vector <int> merge_sort(arr){
//     if(arr.size)
// }

//* Programacion Dinamica *//

vector <int> memo = {0,1};

//* Memoization

int fibonacciMemo(int n){
    if(n<memo.size()){
        return memo[n];
    }
    else{
        int f = fibonacciMemo(n-1) + fibonacciMemo(n-2);
        memo.push_back(f);
        cout << f;
        return f;
    }
}

//* Tabulation

int fibonacciIterativo(int n){
    vector <int> f(n);
    f[0] = 0;
    f[1] = 1;
    for(int i =2; i<= n; i++){
        f[i] = f[n-1] + f[n-2];
    }
    return f[n];
}

int main(){
    //* fibonacci Memoization
    fibonacciMemo(100);    
}