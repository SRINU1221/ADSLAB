#include <iostream>
#include <vector>
using namespace std;

void mergearray(vector<int>&b, int l, int mid, int h){
    vector<int> temp;
    int left=l;
    int right=mid+1;
    while(left<=mid && right<=h){
        if(b[left]<b[right]){
            temp.push_back(b[left]);
            left++;
        }
        else{
            temp.push_back(b[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(b[left]);
        left++;
    }
    while(right<=h){
        temp.push_back(b[right]);
        right++;

    }

    for(int i=l;i<=h;i++){
        b[i]=temp[i-l];
    }

}


void msv(vector<int> &b , int l, int h){
    if(l==h){
        return;
    }
    int mid=(l+h)/2;
    msv(b,l,mid);
    msv(b,mid+1,h);
    mergearray(b,l,mid,h);
}

void ims(vector<int> &b){
    int p,mid;
    int n = b.size();
    int l,h;
    for(p=2; p<=n ;p=p*2){
        for(int i=0; i+p-1<n ; i=i+p){
            l=i;
            h=i+p-1;
            mid=(l+h)/2;
            mergearray(b,l,mid,h);
        }
    }
    if(p/2 <n){
        mergearray(b,0,p/2-1,n-1);
    }

}

int main(){

    cout<<"enter the number of elements \n";
    int n;
    cin>>n;

    vector<int>a(n);
    
    cout<<"enter the elements \n";
    for(int i=0;i<n;i++){
        int j;
        cin >>j;
        a[i]=j;

    }
    int l=0;
    int h=n-1;
    msv(a,l,h);

    cout<<"the final array of the recursive merge sort is \n";
    for(int i=0;i<a.size();i++){
        cout << a[i] << " ";
        
    };

    cout<<" \n";

    cout<<"enter the number of elements \n";
    int m;
    cin>>m;

    vector<int>b(m);
    
    cout<<"enter the elements \n";
    for(int i=0;i<m;i++){
        int j;
        cin >>j;
        b[i]=j;

    }


    
    cout << "the iterative mergesort technique is \n";
    ims(b);
    cout<<"the final array of the iterative merge sort is \n";
    for(int i=0;i<b.size();i++){
        cout << b[i] << " ";
        
    };

}