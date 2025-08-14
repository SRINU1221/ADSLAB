#include <iostream>
#include <vector>
using namespace std;

void insertion(int a[], int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 && a[j-1]>a[j]){
            int t = a[j-1];
            a[j-1]=a[j];
            a[j]=t;
            j=j-1;
        }
     
    }
    for(int k=0;k<n;k++){
        cout <<a[k]<<" ";
    }
}

void vectorsort(vector<int>&a , int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 && a[j-1]>a[j]){
            int t=a[j-1];
            a[j-1]=a[j];
            a[j]=t;
            j=j-1;
        }
        
    }
    for(int k=0;k<n;k++){
        cout <<a[k] << " ";
    }
    
}


int main(){
    int n;
    cout << "enter the size of the array";
    cin >>n;
    int a[n];
    cout<<"enter thr array elements";
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    
    int m;
    cout << "enter the size of the vector";
    cin >>m;
    
    vector<int> b(m);
    for(int i=0;i<m;i++){
        cin >>b[i];
    }
    cout <<" \n";
    cout << "the insertion sort using array \n";
    insertion(a,n);
    cout << " \n";
    
    cout <<"insertion sort using vector \n";
    vectorsort(b,m);
    
    return 0;
    
}
