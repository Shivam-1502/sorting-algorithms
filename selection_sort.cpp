//Selection Sort
#include <iostream>
using namespace std;

int* selection_Sort(int v[],int v_size) {
    for(int i=0;i<v_size;i++) {
        int min_ind=i;
        for(int j=i+1;j<v_size;j++)
            if(v[j]<v[min_ind])
                min_ind=j;
        swap(v[i],v[min_ind]);        
    }
    return v;
}
int main() {
    int v[]={1,4,2,7,8,21,2};
    int *a=selection_Sort(v,7);
    for(int i=0;i<7;i++) {
        cout << a[i] <<" ";
    }
}
