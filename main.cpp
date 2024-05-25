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
    vector<int> v = {1, 2, 3, 4, 5};
    printVector(v);
    return 0;
}