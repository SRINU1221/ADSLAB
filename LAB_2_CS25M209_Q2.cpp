#include<iostream>
#include <vector>
using namespace std;


void merge(vector<int>& b, int l, int mid , int h){
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


void vmergesort(vector<int>& a){
    int p,mid;
    int l,h;
    int n = a.size();
    for(p=2; p<=n ;p=p*2){
        for(int i=0; i+p-1<n ; i=i+p){
            l=i;
            h=i+p-1;
            mid=(l+h)/2;
            merge(a,l,mid,h);
        }
    }
    if(p/2 <n){
        merge(a,0,p/2-1,n-1);
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

    vmergesort(a);
    cout<<"after sorting the vector elements are \n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    };
    

}