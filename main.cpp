#include <iostream>
#include <vector>
using namespace std;

template<typename T>
void printVector(const vector<T>& v){
    for(auto &e: v){
        cout << e << '\t';
    } cout << endl;
}

int main(){
    vector<int> v;
    int n; cout << "Input size of vector: "; cin >> n;
    for(int i=1; i<=n; ++i){
        v.push_back(i);
    }
    printVector(v);
    return 0;
}