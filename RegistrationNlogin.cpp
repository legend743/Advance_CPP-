#include<iostream>
#include<fstream>
using namespace std;
class temp{
 string name, mobile,address,pass,cpass;
 fstream file;

 public:
 void login();
 void signUp();
 void forgotpass();

};
void temp::signUp(){
    cin.ignore();//clear the input buffer
     cout<<"Please Enter your crendials for login"<<endl;
    cout<<"Enter your Name:"<<endl;
    getline(cin,name);
    cout<<"Enter you Mobile Number"<<endl;
    getline(cin,mobile);
    cout<<"Enter your address"<<endl;
    getline(cin,address);
    cout<<"create your password "<<endl;
    getline(cin,pass);
    // cout<<"confirm password"<<endl;
    // getline(cin,cpass);
    file.open("registrationdDetails.txt",ios::out | ios::app);
    file<<name<<"|"<<address<<"|"<<mobile<<"|"<<pass <<endl;
    file.close();
}
int main(){
   
    char choice;
    cout<<"\n\t\t Please select one:"<<endl;
    cout<<"\n\t\t 1.For registration"<<endl;
    cout<<"\n\t\t 2.For login"<<endl;
    temp t;

cin>>choice;
switch (choice)
{
case '1':
   t.signUp();
   
   

    break;

default:
    break;
}    
    
    return 0;
}