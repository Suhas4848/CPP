#include<iostream>
#include<climits>
 using namespace std;

int main(){
int n;

cout<<"Enter the number of elements in an array : ";
cin>>n; 
int arr[n];

cout<<"Enter the elements of array : \n";
for (int i = 0; i < n; i++){
cin>>arr[i];
}

int maxNO = INT_MIN;
int minNO = INT_MAX;

for (int i = 0; i < n; i++){
maxNO = max(maxNO, arr[i]);
minNO = min(minNO, arr[i]);
}

cout<<"Maximum Element :"<<maxNO<<endl<<"Minimum Element :"<<minNO<<endl;
return 0;
}