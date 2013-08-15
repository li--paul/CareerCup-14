#include <iostream>
#include <vector>

using namespace std;

void sort(vector<int> &a, vector<int> &b) {
        int p = a.size()-1;
        int a_tail = a.size()-1-b.size();
        int b_tail = b.size()-1;
        for (p = a.size()-1;p>=0;p--) {
                if (b_tail<0) break;
                if (a_tail>=0 && a[a_tail]>b[b_tail]) {
                        a[p] = a[a_tail];
                        a_tail--;
                }
                else {
                        a[p] = b[b_tail];
                        b_tail--;
                }
        }
}

int main() {
        vector<int> a;
        a.push_back(3);
        a.push_back(4);
        a.push_back(7);
        a.push_back(9);
        a.push_back(0);
        a.push_back(0);
        a.push_back(0);
        vector<int> b;
        b.push_back(1);
        b.push_back(6);
        b.push_back(8);
        sort(a,b);
        for (int i=0;i<a.size();i++) {
                cout << a[i] << " ";
        }
        return 0;
}
