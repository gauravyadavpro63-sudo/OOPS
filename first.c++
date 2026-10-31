// #BASIC EXAMPLE



// #include <bits/stdc++.h>
// using namespace std;

// class student{
//     public:
//     string name;
//     string subject;
//     int age;
// };


// int main(){

//     student s1;

//     s1.name="gaurav";
//     cout<<s1.name;

// }


// #ACCESSING PRIVATE VALUE FROM OUTSIDE USING PUBLIC FUNCTION IN CLASS 


// #include <bits./stdc++.h>
// using namespace std;

// class student {
//    private:
//     string name;

//     public:
//     void setname(string n){
//         name=n;
//     }
//     void getname(){
//         cout<<name;
//     }
// };

// int main(){

//     student s1;
//     s1.setname("gaurav");
//     s1.getname();
// }


// #DYNAMIC MEMORY ALLOCATION

// student *s1=new student
// s1->name="gaurav"
// cout<<s1->name




                                    //LECTURE 2



// #include <bits./stdc++.h>
// using namespace std;

// class Customer{
//     string name;
//     int account_number;
//     int balance;
//     public:
//     //default constructor
//     Customer(){
//         name="Rohit";
//         account_number=5;
//         balance=122;
//     }
//     //parametrised constructor
//     Customer(string a,int b,int c){
//         name=a;
//         account_number=b;
//         balance=c;
//     }
//     Customer(string name){
//         this->name=name;   //points to address of the object
//         account_number=12;
//         balance=0;
//     }
//     //inline constructor
//     //inline Customer(string a,int b, int c):name(a),account_number(b),balance(c){}
    
//     //copy constructor
//     Customer(Customer &B){
//         name=B.name;
//         account_number=B.account_number;
//         balance=B.balance;
//     }

//     void display(){
//         cout<<name<<account_number<<balance<<endl;
//     }
// };
// int main(){

//     Customer A1;
//     Customer A2("Rohit",23,1000);
//     Customer A3("tony");
//     A1.display();
//     A2.display();
//     A3.display();
//     Customer A4(A3);
//     A4.display();
// }




#include <bits./stdc++.h>
using namespace std;
class Customer
{
    string name;
    int *data;

    public:
    Customer(){
        name="rohit";
        data=new int;
        *data=10;
        cout<<"constructor is called\n";
    }
    // destructor 
    ~Customer(){
        delete data;
        cout<<"destructor is called";
    }
};
int main(){
Customer A1;
}


//constructors are called in the order of object creation while destructors are called in reverse order












