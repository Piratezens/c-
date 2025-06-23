#include<iostream>
using namespace std;
class student_fee{
    char name[20];
    int batch;
    int roll;
    float fee;

    public:
    student_fee(){}
    student_fee(const char* n,int b,int r);
    student_fee(const char* n,int b, float r);

    void display(void);
};
student_fee::student_fee(const char* n, int b,int r)
{
strcpy(name,n);
batch=b;
roll=r;
fee=45000;
}
student_fee::student_fee(const char* n,int b,float r)
{
    strcpy(name,n)
    batch=b;
    roll=r;
    fee=5000;

}
void student_fee::display(void)
{
    cout<<"\n";
    cout<<
}




    
