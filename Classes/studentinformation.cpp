#include<iostream>
 using namespace std;
 class Student
 {
     private:
         int rno;
         char name[20];
         float avgmarks;
     public:
         void read_data();
         void print_data();
 };
 void Student::read_data()
 {
     cout<<"Enter the roll no. ";
     cin>>rno;
     cout<<"Enter name. ";
     cin>>name;
     cout<<"Enter Average Marks. ";
     cin>>avgmarks;
 }
 void Student::print_data()
 {
     cout<<rno<<"\t"<<name<<"\t"<<avgmarks<<endl;
 }
 int main()
 {
     Student std[5];
     for (int i=0;i<3;i++)
     {
         std[i].read_data();
     }
     cout<<"Student Information is"<<endl;
     cout<<"RNo\tName\tAvg Marks"<<endl;
     for (int i=0;i<3;i++)
     {
         std[i].print_data();
     }
     return 0;
 }