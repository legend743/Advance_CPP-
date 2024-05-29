#include<iostream>
#include<fstream>
using namespace std;
class temp{
 string name, mobile,address,pass,cpass,username;
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
    cout<<"Enter your username"<<endl;
    getline(cin,username);
    cout<<"create your password "<<endl;
    getline(cin,pass);
    // cout<<"confirm password"<<endl;
    // getline(cin,cpass);
    file.open("registrationdDetails.txt",ios::out | ios::app);
    file<<name<<"|"<<address<<"|"<<mobile<<"|"<<username<<"|"<<pass <<endl;
    file.close();
}
void temp::login(){
    cin.ignore();
     string matchusername,matchpass;
     cout<<"Enter your username"<<endl;
     getline(cin,matchusername);
     cout<<"Enter your password"<<endl;
     getline(cin,matchpass);
     file.open("registrationdDetails.txt",ios::in);
        if(!file.is_open()){
            cerr<<"error opening file"<<endl;
            return;
        }
        bool loginSuccess=false;


      while (getline(file, name, '|') && getline(file, address, '|') && getline(file, mobile, '|') &&
           getline(file, username, '|') && getline(file, pass)){
          if (username == matchusername && pass == matchpass) {
            cout << "Login successful!!!" << endl;
            loginSuccess = true;
            break;
        }
        }
    if (!loginSuccess) {
        cout << "Please enter valid credentials or register if you don't have an account." << endl;
    }

     file.close();
     

}
int main(){
    char choice;
    cout<<"\n\t\t Please select one:"<<endl;
    cout<<"\n\t\t 1.For registration"<<endl;
    cout<<"\n\t\t 2.For login"<<endl;
    cout<<"\n\t\t 2.Forget password!!!"<<endl;
    temp t;

cin>>choice;
switch (choice)
{
case '1':
   t.signUp();
   
   

    break;
case '2':
    t.login();

case '3':
    t.forget();

default:
    break;
}    
    
    return 0;
}