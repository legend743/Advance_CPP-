#include<iostream>
#include<fstream>
using namespace std;
int main(){

    ofstream f;
    f.open("z1.txt");
    f<<"Hello Faisal\n";
    f<<"Hello shariq\n";
    f<<"hello everyone\n";
    f.close();

    ifstream fin;
    fin.open("z1.txt");
    string Line;
    while(getline(fin,Line)){
        cout<<Line<<endl;
    }
    fin.close();
    


}