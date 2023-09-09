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

//* Strings

//* Funcion de prefijos

vector <int> prefixFunction(string pattern){
    int pattern_length = pattern.length();
    vector <int> pfxVector(pattern_length);
    int i = 1;
    int j = 0;
    pfxVector[0] = 0;

    while(i < pattern_length){
        if (pattern[i]==pattern[j]){
            pfxVector[i] = j+1;
            i++;
            j++;
        }else{
            if(j==0){
                pfxVector[i]=0;
                i++;}

            else{
                j = pfxVector[j-1];
            }
        }
    }
    
    return pfxVector;
}


int main(){
    //* fibonacci Memoization
    // fibonacciMemo(100); 
    string pattern_test = "AAAABAACD";
    vector <int> vector_test1 = prefixFunction(pattern_test);
    for(int i = 0; i < vector_test1.size(); i++){
        cout << vector_test1[i] << " ";
    }
    return 0;

}
