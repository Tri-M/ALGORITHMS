#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <map>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    int n;
    int a,b;
    scanf("%d",&n);
    map<int,int> cnta;
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a);
        cnta[a] ++;
    }
    int cntmatch=0;
    for (int i=0;i<n;i++)
    {
        scanf("%d",&b);
        if (cnta[b] > 0)
        {
            cnta[b]--;
            cntmatch ++;
        }
    }
    if (cntmatch == n)
        printf("%d\n",cntmatch-1);
    else
        printf("%d\n",cntmatch+1);
}