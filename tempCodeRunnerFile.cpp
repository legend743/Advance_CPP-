#include <iostream>
#include<fstream>
using namespace std;
class library{
    string id,name,author;
    fstream file;
    public:
    void addbook();
    void showAll();

};
void library::addbook(){
    cout<<"\n Enter bool Id:";
    getline(cin,id);
    cout<<"\n Enter book Name:";
    getline(cin,name);
    cout<<"\n Enter Author:";
    getline(cin,author);
    file.open("bookData.txt",ios::out|ios::app);
    file<<id<<"*"<<name<<"*"<<author<<endl;
    file.close();


}   
void library::showAll()
{
    file.open("bookData.txt",ios::in);
    getline(file,id,'*');
    getline(file,name,'*');
    getline(file,author,'\n');

    cout<<"\t\t"<<endl;
    cout<<"\t\tBood Id\t\t\tBook Name\t\t\ author Name"<<endl;
    while(!file.eof()){

        cout<<"\t\t"<<endl;
        cout<<"\t\t"<<id<<"\t\t\t"<<name<<"\t\t\"<<author<<endl;
        }
    file.close();
    };
int main()
{
    int choice;
    cout << "---------------------------------------------------" << endl;
    cout << "\t\t1.Show all books" << endl;
    cout << "\t\t2.Extract books" << endl;
    cout << "\t\t3.Add Books" << endl;
    cout << "\t\t4.Exit" << endl;
    cout << "----------------------------------------------------"<<endl;
    cout<<"\t\tEnter your choice:"<<endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
    int ch;
        cout<<"\t\t1.The last day"<<endl;
        cout<<"\t\t2.My Father"<<endl;
        cout<<"\t\t3.Dignity"<<endl;
        cout<<"\t\t4.My sweet Home"<<endl;
        cout<<"\t\t5.MY Life MY Rule"<<endl;
        cout<<"\t\t6.The Heaven"<<endl;
        cout<<"\t\t7.The last of us"<<endl;
        cout<<"\t\t8.Black Day"<<endl;
        cout<<"\t\t9.Godaan"<<endl;
        cout<<"\t\t10.Panchatantra"<<endl;
        cout<<"\t\t11.Picasso"<<endl;
        cout<<"\t\t12.Priya Mitra"<<endl;
        cout<<"\t\t13.Sapne Ladakpan ke"<<endl;
        cout<<"\t\t14.Existance God"<<endl;
        cout<<"\t\t15.cancel"<<endl;
        cout<<"\t\tEnter your choice"<<endl;

        cin>>ch;
        if(ch==15){
            cout<<"\t\t thanks for visiting"<<endl;
            break;

        }else{
            cout<<"\t\t This book is alloted to you for 14 days"<<endl;
        }
        break;
    case 2:
        
        break;
    case 3:
        /* code */
        break;
    case 4:
        /* code */
        break;

    default:
        break;
    }
}