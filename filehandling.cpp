#include<iostream>
#include<fstream>

using namespace std;
int main(){
    // first of all open the file

    ofstream oft;
    
        oft.open("test.txt");// this line creates and open the file
        //here  I can write the  file
        oft<<"Hello India";
        oft.close();//here Here I can release the resources



}