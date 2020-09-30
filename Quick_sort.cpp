#include <iostream>
#include <cstdio>

using namespace std;

void swap (int* a, int* b) {
    *a = *a+*b;
    *b = *a-*b;
    *a = *a-*b;
}

void partition (int a[], int start, int end) {
    int x = a[start];
    int i, j, i1 = 0, i2 = 0;
    int l1[1000], l2[1000];
    for (j = start+1; j < end; j++) {
        if (a[j] <= x) {
            l1[i1] = a[j];
            i1++;
        }
        else {
            l2[i2] = a[j];
            i2++;
        }
    }
    for (i = 0; i < i1; i++) {
        cout << l1[i] << " ";
    }
    cout << x << " ";
    for (i = 0; i < i2-1; i++) {
        cout << l2[i] << " ";
    }
    cout << l2[i];
}

int main () {
    
    int n, a[1001];
    
    cin >> n;
    
    int i = 0;
    
    while (i < n) {
        cin >> a[i];
        i++;
    }
    
    partition (a, 0, n);
    
    return 0;
}


/* sample input 
 5
 7 5 8 3 9 */
