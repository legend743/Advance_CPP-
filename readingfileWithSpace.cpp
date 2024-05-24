#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //read the text from the file
    ifstream f;
    f.open("test.txt");
    //read the file
    char c;
    c=f.get();
    while(!f.eof()){
        cout<<c;
        c=f.get();
    }
    f.close();
}