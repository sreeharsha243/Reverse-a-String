#include<iostream>
#include<fstream>
#include<String.h>
#include<stdio.h>
using namespace std;
void reverse(char *);

int main(int argc,char *argv[])
{
    char name[50];
    if(argc==1)
    {
        do{
            cout<<"enter the name to be reversed \n";
            cin.getline(name,50);
            if(cin.eof())
                break;
            reverse(name);
            cout<<name<<"\n";
        }while(1);
    }
    else{
        fstream fp1,fp2;
        char name1[50];
        fp1.open(argv[1],ios::in);
        fp2.open(argv[2],ios::out);
        do{
            fp1.getline(name1,50);
            reverse(name1);
            if(fp2.eof())
                break;
            fp2<<name1<<endl;
            cout<<name1<<endl;
        }while(1);
        fp1.close();
        fp2.close();
    }
}
void reverse(char *name)
{
    int i;
    int j=strlen(name)-1;
    for(i=0;i<j;i++,j--)
    {
        char temp=name[i];
        name[i]=name[j];
        name[j]=temp;
    }
}
