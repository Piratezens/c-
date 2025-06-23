#include<iostream>
#include<cstring>
using namespace std;
class student{
char name[20];
public:
student(){
    cout<<"Default constructor called"<<endl;

}
student(const char *n)
{cout<<"parametrized constructor called"<<endl;
strcpy(name,n);
}
student(student &s)
{
    strcpy(name,s.name);

}
void display(void)

{
    cout<<"Name:"<<name<<endl;
}

};
int main()
{
    student A("rahul");
    student B(A);
    student C=A;
    student D;
    D=A;
    cout<<"object A:";A.display();
    cout<<"object B:";B.display();
    cout<<"object C:";C.display();
    cout<<"object D:";D.display();
}
