#include<iostream>
#include<fstream>
using namespace std;

class contactClass {
    string contactName,mobile;
    ofstream file;
    public:
    void showContacts();
    void addContact();

};
void contactClass::showContacts(){

}
void contactClass::addContact(){
    cin.ignore();
    cout<<"\t\tEnter Contact Name___:"<<endl;
    getline(cin,contactName);
    cout<<"\t\tEnter Mobile Number___:"<<endl;
    getline(cin,mobile);
    file.open("Contactlist.csv",ios::out|ios::app);
    if(!file.is_open()){
        cout<<"Unable to create file"<<endl;
    }
    file<<contactName<<mobile;
    file.close();

}
int main(){
    contactClass t;
    int n;
    cout<<"choose one!!!"<<endl;
    cin>>n;
    switch (n)
    {
    case1:
      t.showContacts();
        break;
    case 2:
        t.addContact();
    
    default:
        break;
    }

}