#include<bits/stdc++.h>
using namespace std;

int main(){

   #ifndef ONLINE_JUDGE
       clock_t tStart = clock();
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
  #endif

       int rows;
       cin>>rows;

       cout<<"Decreasing Pattern"<<endl<<endl;

       for(int i=1;i<=rows;i++){
         for(int j=0;j<i;j++){
            cout<<"*"<<" ";
         }
         cout<<endl;
       }

       cout<<endl<<"Triangular Pattern"<<endl<<endl;

       for(int i=1;i<=rows;i++){
         for(int j=0;j<rows-i;j++){
            cout<<" ";
         }
         for(int k=0;k<i;k++){
            cout<<"*"<<" ";
         }
         cout<<endl;
       }

       cout<<endl<<"Inverted Decreasing Pattern"<<endl<<endl;

       for(int i=1;i<=rows;i++){
         for(int j=0;j<rows-i;j++){
            cout<<"  ";
         }
         for(int k=0;k<i;k++){
            cout<<"*"<<" ";
         }
         cout<<endl;
       }

  #ifndef ONLINE_JUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}