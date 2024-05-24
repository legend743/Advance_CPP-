#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream fin;
    //first I will open the file
    fin.open("test.txt");
    // read the file
    char c;
    fin>>c;
    while(!fin.eof()){
        cout<<c;
        fin>>c;
    }; fin.close();
}