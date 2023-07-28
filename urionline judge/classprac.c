#include<bits/stdc++.h>
using namespace std;

class person
{
    char name[30];
    int age;
    void getdata(void);
    void putdata(void);

};
void person:: getdata(void)
{
    cout<<"name"<<endl;
    cin>>name;
    cout<<"age"<<endl;
    cin>>age;
}
void person:: putdata(void)
{
    cout<<name<<endl;
    cout<<age<<endl;
}

int main()
{
    person p;
    p.getdata();
    p.putdata();
}
