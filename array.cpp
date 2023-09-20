//Q.no 1:-Calculate the product of all the elements in the given array.
#include <iostream>
using namespace std;
int main() {
int arr[5]={1,2,3,4,5};
int pdt = 1;
for(int i=0;i<5;i++){
pdt = pdt*arr[i];
}
cout<<pdt;
return 0;
}
// Q.no 2Find the second largest element in the given Array in one pass.

#include <iostream>
#include<climits>
using namespace std;
int main() {
int arr[6]={11 ,45, 1, 10, 29, 1};
int max1=INT_MIN;
int max2=INT_MIN;
for(int i=0;i<5;i++){
if(max1<arr[i]){
max2=max1;
max1=arr[i];
}
else if(max2<arr[i] && arr[i]!=max1){
max2=arr[i];
}
}
if(max2==INT_MIN){
cout<<"No second element exists"<<endl;
}
else cout<<max2<<endl;
return 0;
}
//Q.no 3Find the minimum value out of all elements in the array.

#include <iostream>
using namespace std;
int main(){
int arr[5] = {1,2,3,4,5};
int min = INT_MAX;
for(int i=0;i<5;i++){
        if(min>arr[i])
            min=arr[i];
}
cout << min;
return 0;
}
//Q.no 4:-Given an array, predict if the array contains duplicates or not.


#include<iostream>
using namespace std;
int main() {
int arr[5]={1,2,2,4,5};
bool flag = false;
for(int i=0;i<5;i++){
for(int j=i+1;j<5;j++){
if(arr[i]==arr[j]){
flag = true;
cout<<arr[i];
break;
}
}
}
if(flag==false) cout << "No duplicate";
return 0;
}
// Q.no 5 WAP to find the smallest missing positive element in the sorted Array that contains only positive

#include<iostream>
using namespace std;
int main() {
cout<<"enter 5 elements of the array"<<endl;
int a[5];
for(int i=0;i<5;i++){
cin>>a[i];
}
int x=0;
bool flag=false;
for(int i=0;i<5;i++){
if(a[i]!= x){
cout<<x<<endl;
flag=true;
break;
}
else x++;
}
if(flag==false) cout<<x<<endl;
return 0;
}
// Q.no:- 6 Predict the output.

int main(){
int sub[50], i ;
for ( i = 0 ; i <= 48 ; i++ ) ;
{
sub[i] = i ;
cout<<sub[i]<<endl ;
}
return 0;
}
Solution:-49
