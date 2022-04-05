#include<bits/stdc++.h>
using namespace std;
void swap(vector<int> &a,int i,int j){
    int temp = a[i];
    a[i]=a[j];
    a[j]=temp;
}
// void zigZag(int arr[], int n) {
	    
// 	    for(int i=0;i<n-1;i++){
// 	        if(arr[i]>arr[i+1]&&i%2==0){
// 	            swap(arr[i],arr[i+1]);
// 	        }
// 	        else if(arr[i]<arr[i+1]&&i%2){
// 	            swap(arr[i],arr[i+1]);
// 	        }
// 	    }
// 	}
void zigzag(vector<int> &a){
    if(a.size()==0) return;
    int n;
    n=a.size();
    for(int i=0;i<n;i+=2){
        if(a[i]> a[i-1] && i>0)
        swap(a,i,i-1);
        if(i<n-1 && a[i]> a[i+1])
        swap(a,i,i+1);
    }
}
int main(){
    //code
	int t;
	cin>>t;
	
	for(int j=0; j<t; j++){
	    int n;
	    cin>>n;
	    
	    vector<int> a;
	    for(int i=0; i<n; i++){
	        int num;
	        cin>>num;
	        a.push_back(num);
	    }
	    
	    zigzag(a);
	    
	    for(int i=0; i<n; i++)
	        cout<<a[i]<<" ";
	        
	   cout<<endl;
	}
	return 0;
}
