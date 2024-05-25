#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
 using namespace std;
 int main(){
    vector<int>arr(5);
    cout<<"Enter the values which you want to store\n";
    for(int i=0;i<5;i++){
        cin>>arr[i];}
    
    //open the filebuf
    ofstream os;
    os.open("zero.txt");
    os<<"Original data:\n";
    for(int i=0;i<5;i++){

        os<<arr[i]<<" ";
    };
    os<<"\n sorted data:\n";
    sort(arr.begin(),arr.end());
    for(int i=0;i<5;i++){
        os<<arr[i]<<" ";
    };

    os.close();


 }