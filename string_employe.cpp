#include<iostream>
using namespace std;
class employee
{
    int empId;
    string name ;
    int salary;
public :

    employee()
    {

        cout<<"Employee class defoult constructor"<<endl;
    }
    employee( int id ,string n,int s)
    {
        empId = id;
        name = n;
        salary=s;

    }
    void print()
{
    cout<<"employee  name "<<"\id"<<empId<<endl;
     cout<<"employee  name "<<"\t"<<name<<endl;
      cout<<"employee  name "<<"\t"<<salary<<endl;

}
};
class node
{
public:
    employee obj;
    node *next;
};

    int main()
    {

        employee e1(111,"Amit kumar",34000);
          employee e2(222,"Ajay kumar",44000);
            employee e3(333,"Ram kumar",54000);
    //creating node
node *n1 = new node();
n1->obj = e1;
n1->next = NULL;

node *n2 = new node();
n2->obj = e2;
n2->next = NULL;
//pointing referance to next node
n1->next = n2;

node *n3 = new node();
n3->obj = e3;
n3->next = NULL;

n3->next =NULL;

n2->next = n3;

  node *current = new node();
  current =n1;
  while (current != NULL)
{
    current->obj.print();
    current = current->next;

}
    }

