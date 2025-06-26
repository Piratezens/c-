#include<iostream>
#include<cstring>
using namespace std;
class String{
    char *str;
    int length;
    public:
    String()
    {
        length=0;
        str=new char[length+1];
        str[0] = '\0';
    }
    String( const char *s)
    {
        length=strlen(s);
        str=new char[length+1];
        strcpy(str,s);

    }
    void display(void)
    {
        cout<<"string:"<<str<<endl;
    }
    void join(String &a,String &b )
    {
        length =a.length+b.length;
        delete[] str;
        str = new char[length+1];
        strcpy(str,a.str);
        strcat(str,b.str);

    }
};
int main()
{
   const char *s1="hello";
    String A(s1),B("world"),C("love"),D,E;
    D.join(A,B);
    E.join(C,D);
    A.display();
    B.display();
    C.display();
    D.display();
    E.display();
    return 0;

}