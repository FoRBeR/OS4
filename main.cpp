#include <iostream>
#include <ctime>

int f(int i){
    int b = 3;
    int c = 3;
    if(i == 0) return 0;
    long x = 0;
    for(long n = 1; n < 100000001; n++){
        x += b * 2 + c - i;
    }
    return x + f(i - 1);
}

int main() {
    using namespace std;
    int start_time =  clock();
    f(55);
    cout << (float)(clock() - start_time) / 1000 << " s";
    return 0;
}
