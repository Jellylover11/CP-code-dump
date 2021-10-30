#include <bits/stdc++.h>
class Person
{
    protected:
        std::string name;
        std::string contact_number;
    public:
        Person():name(""),contact_number(""){};
        Person(std::string s,std::string c):name(s),contact_number(c){};
        virtual void display(Person** ptr)=0;
        virtual char* password()=0;
        std::string addcontactprefix(Person** ptr);

};
std::string Person::addcontactprefix(Person **ptr)
{
    std::string add="+88";
    return add+contact_number;
}
class Student:public Person
{
    protected:
        int student_id;
        std::string program;
    public:
        Student():Person(),student_id(0),program(""){};
        Student(std::string s,std::string c,int si,std::string p):Person(s,c),student_id(si),program(p){};
        void display(Person** ptr)
        {
            std::string temp=typeid(**ptr).name();
            std::cout<<"-----"<<temp.substr(1)<<"-----"<<std::endl;
            std::cout<<"NAME:"<<name<<std::endl;
            std::cout<<"PHN NUM:"<<addcontactprefix(ptr)<<std::endl;
            std::cout<<"STUDENT_ID:"<<student_id<<std::endl;
            std::cout<<"PROGRAM:"<<program<<std::endl;
            std::cout<<"PASS:"<<password()<<std::endl;
            std::cout<<std::endl;
        }
        char* password()
        {
            int i;
            char *ptr1=new char[9];
            for(i=0;i<3;i++)
            {
                ptr1[i]=65+(rand()%(90-65+1));
            }
            for(i=3;i<5;i++)
            {
                ptr1[i]=97+(rand()%(122-97+1));
            }
            for(i=5;i<6;i++)
            {
                ptr1[i]=48+(rand()%(57-48+1));
            }
            for(i=6;i<8;i++)
            {
                ptr1[i]=33+(rand()%(47-33+1));
            }
            ptr1[8]='\0';
            return ptr1;
        }


};
class Staff:public Person
{
    protected:
        std::string designation;
        std::string Department;
    public:
        Staff():Person(),designation(""),Department(""){};
        Staff(std::string s,std::string c,std::string dt,std::string dp):Person(s,c),designation(dt),Department(dp){};
        void display(Person** ptr)
        {
            std::string temp=typeid(**ptr).name();
            std::cout<<"-----"<<temp.substr(1)<<"-----"<<std::endl;
            std::cout<<"NAME:"<<name<<std::endl;
            std::cout<<"PHN NUM:"<<addcontactprefix(ptr)<<std::endl;
            std::cout<<"DESIGNATION:"<<designation<<std::endl;
            std::cout<<"DEPT:"<<Department<<std::endl;
            std::cout<<"PASS:"<<password()<<std::endl;
            std::cout<<std::endl;
        }
        char* password()
        {
            int i;
            char *ptr2=new char[9];
            for(i=0;i<2;i++)
            {
                ptr2[i]=65+(rand()%(90-65+1));
            }
            for(i=2;i<5;i++)
            {
                ptr2[i]=97+(rand()%(122-97+1));
            }
            for(i=5;i<7;i++)
            {
                ptr2[i]=48+(rand()%(57-48+1));
            }
            for(i=7;i<8;i++)
            {
                ptr2[i]=33+(rand()%(47-33+1));
            }
            ptr2[8]='\0';
            return ptr2;
        }


};
class Staff_Student:virtual public Staff
{
    protected:
        int num_of_cre;
    public:
        Staff_Student():Staff(),num_of_cre(0){};
        Staff_Student(std::string s,std::string c,std::string dt,std::string dp,int x):Staff(s,c,dt,dp),num_of_cre(x){};
        void display(Person** ptr)
        {
            std::string temp=typeid(**ptr).name();
            std::cout<<"-----"<<temp.substr(2)<<"-----"<<std::endl;
            std::cout<<"NAME:"<<name<<std::endl;
            std::cout<<"PHN NUM:"<<addcontactprefix(ptr)<<std::endl;
            std::cout<<"DESIGNATION:"<<designation<<std::endl;
            std::cout<<"DEPT:"<<Department<<std::endl;
            std::cout<<"NUM_OF_CRE:"<<num_of_cre<<std::endl;
            std::cout<<"PASS:"<<password()<<std::endl;
            std::cout<<std::endl;
        }
};
int main()
{
    Person* arr[100];
    arr[1]=new Student("Ocean","0171123",12,"CSE");
    arr[2]=new Student("Bruno","0912123",13,"CSE");
    arr[3]=new Staff("Pogba","0173131","CM","EEE");
    arr[4]=new Staff_Student("Martial","0911341","CF","MCE",22);
    arr[1]->display(&arr[1]);
    arr[2]->display(&arr[2]);
    arr[3]->display(&arr[3]);
    arr[4]->display(&arr[4]);

}
