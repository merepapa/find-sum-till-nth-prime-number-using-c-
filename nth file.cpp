// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
int n,b,i,sp=0,prime=0;
cout<<"Enter any value= ";
cin>>n;
for (b=2;b<=1000;b++){
    int count=0;
     for (i=2;i<b;i++){
         if (b%i==0){
            count++;
         }
     }
   //c=count;
     if (count==0){
         cout<<b;
         sp=sp+b;
         prime++;
         if (prime==n){
           break;
         }
         cout<<"+";
   }

}
cout<<"="<<sp;
return 0;
}