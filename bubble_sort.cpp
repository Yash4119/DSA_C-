#include<bits/stdc++.h>
using namespace std;

void swap(int arr[], int i, int j){
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void bbSort_iterative(int arr[], int n){

	for(int i=0;i<n-1;i++){
		bool swapped = true;
		cout<<"pass :- "<<i+1<<endl;
		for(int j=0;j<n-i-1;j++){
			if(arr[j] > arr[j+1]){
				swapped = false;
				swap(arr,j,j+1);
			}
		}
		if(swapped){
			return;
		}
	}
}

void bbSort_recursive(int arr[],int n){
	if(n==0 || n==1){
		return;
	}
	cout<<"pass"<<endl;
	bool swapped = true;
	for(int i=0;i<n-1;i++){
		if(arr[i] > arr[i+1]){
			swap(arr,i,i+1);
			swapped = false;
		}
	}

	if(swapped){
		return;
	}
	bbSort_recursive(arr,n-1);
}

void display(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){

   #ifndef ONLINEJUDGE
       clock_t tStart = clock();
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
  #endif

       //Your Code
       // int a,b;
       // cin>>a>>b;

       // cout<<a<<" "<<b<<endl;
       // swap(a,b);
       // cout<<a<<" "<<b<<endl;

       int n;
       cin>>n;

       int arr[n];
       for(int i=0;i<n;i++){
       	cin>>arr[i];
       }

       cout<<"Array Before Sorting is :- "<<endl;
       display(arr,n);

       bbSort_iterative(arr,n);
       // bbSort_recursive(arr,n);

       cout<<"Array After Sorting is :- "<<endl;
       display(arr,n);


  #ifndef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}