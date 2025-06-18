#include<iostream>
using namespace std;
// This is an example of a C-- program  with class
 class student {
    int roll;
    string name;
    public:
    void getdata(int r, string n)
    {
        roll =r;
        name =n;

    }
    void display()
    {
        cout<<"roll : "<<roll<<endl;
        cout<<"name:"<<name<<endl;

    }
 };
int main()
{ int r;
    string name;

    cout<<"hello world"<<endl;
    student s1;
    cout<<"enter your roll and name"<<endl;
    cin>> r>> name;

    s1.getdata(r,name);
    s1.display();
    cout<<"end of program"<<endl;
    
    
    return 0;

}