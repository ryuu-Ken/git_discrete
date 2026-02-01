#include<iostream>
using namespace std;

class book{
    string title;
    string author;
    int ispn;

    public:
    void get_data(){
        cout<<"Enter the Title: "; 
        getline(cin,title);
        cout<<"Author: ";
        getline(cin,author);
        cout<<"ISPN: ";
        cin>>ispn;
    }
    
    void show_data(){
        cout<<"The title name is: "<<title<<endl<<"The author name is: "<<author<<endl<<"The ISPN number is: "<<ispn; 
    }

};

int main(){
    book b;
    b.get_data();
    b.show_data();
    return 0;
}