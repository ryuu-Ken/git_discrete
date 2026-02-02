#include<iostream>
using namespace std;

class student{
    string name;
    int roll;
    int marks;

    public:
    void get_data(){
        cout<<"Enter the name of the student: ";
        getline(cin,name);
        cout<<"Enter the roll no: ";
        cin>>roll;
        cout<<"Enter the marks: ";
        cin>>marks;

            if (marks > 90){
                cout<<"Grade: A+";
            }
        
            else if (marks >=80 && marks < 90){
                cout<<"Grade: A";
            }

            else if (marks >=70 && marks <80){
                cout<<"Grade: B+";
            }

            else if (marks >=60 && marks <70){
                cout<<"Grade: B"; 
            }

            else if (marks >=50 && marks <60){
                cout<<"Grade: C";
            }
    
        else{
        cout<<"Fail";
        }
    }

};

int main(){
    student s;
    s.get_data();
    return 0;
}
