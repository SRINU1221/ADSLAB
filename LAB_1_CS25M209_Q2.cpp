#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sortarray(int a[],int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 && a[j-1]>a[j]){
            int temp = a[j-1];
            a[j-1]=a[j];
            a[j]=temp;
            j--;
        }
    }
}

void binarysearcharr(int a[], int n, int k){
    int l=0;
    int h=n-1;
    while(l<=h){
        int mid =(l+h)/2;
        if(a[mid]==k){
            cout << "yes the key is present at index " << mid  << " \n";
            return;
        }
        else if(a[mid]>k){
            h--;
        }
        else{
            l++;
        }
    }
    cout <<"no the key is not present in the array \n";
    
}

void binarysearchvector(vector<int> &a, int n, int k){
    int l=0;
    int h=n-1;
    while(l<=h){
        int mid =(l+h)/2;
        if(a[mid]==k){
            cout << "yes the key is present at index " << mid  << " \n";
            return;
        }
        else if(a[mid]>k){
            h--;
        }
        else{
            l++;
        }
    }
    cout <<"no the key is not present in the array \n";
    
}

int main(){
    int key;
    cout << "enter a key \n";
    cin >>key;
    cout <<"enter the size of the array \n";
    int n;
    cin >>n;
    
    int a[n];
    cout <<"enter the array elements \n";
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    sortarray(a,n);
    binarysearcharr(a,n,key);
    
    
    cout << "binary search using vector \n";
    cout <<"enter the key for the vector array \n";
    int vkey;
    cin >>vkey;
    cout <<"enter the size of the vector \n";
    int m;
    cin >>m;
    vector<int> b(m);
    cout <<"enter the elements for the vector \n";
    for(int i=0;i<m;i++){
        cin >>b[i];
    }

    sort(b.begin(),b.end());
    binarysearchvector(b,m,vkey);   
    
}

