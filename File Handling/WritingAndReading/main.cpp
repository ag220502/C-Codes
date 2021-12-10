//
#include <fstream>
#include<iostream>
using namespace std;
int main( ) {
    ofstream fout("student");
    char name[20],ch;
    float mks=0.0;
    for(int i=0;i<3;i++)
    {
        cout<<"Student : "<<i+1<<" : \tName : ";
        cin.get(name,20);
        cout<<"\t\tMarks : ";
        cin>>mks;
        cin.get(ch);
        fout<<name<<"\n"<<mks<<"\n";
    }
    fout.close();
    ifstream fin("student");
    fin.seekg(0);
    cout<<"\n";
    for (int i=0; i<3; i++) {
        fin.get(name,20);
        fin.get(ch);
        fin>>mks;
        fin.get(ch);
        cout<<"Student Name : "<<name;
        cout<<"\t Marks : "<<mks<<endl;
    }
    fin.close();
    return 0;
}
