#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

void examineTestCase(int,int,vector<int>);

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
        vector<int> a(n);
        for(int a_i = 0;a_i < n;a_i++){
           cin >> a[a_i];
        }
        examineTestCase(n,k,a);
    }
    return 0;
}

void examineTestCase(int n, int k, vector <int> a){
    int studentsOnTime=0;
    
    for(int a_i = 0; a_i < n ; a_i++){
        if (a[a_i] <= 0){
            studentsOnTime++;
        }
    }
    if(studentsOnTime >= k){
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
}
