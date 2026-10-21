// #include <iostream>
// #include <string>
// using namespace std;

// class Teacher{
//     //properties or attributes
//     private:
//     double salary;

//     public:

//     string name;
//     string dept;
//     string sub;

//     // non-parameterized constructor - no parameters are passed
//     Teacher(){  // constructor function formed by programmer
//       cout<<"Hi, I am a constructor"<<endl;
//       dept = "Computer Science";
//     }

//     //parameterised - parameters are passed
//     Teacher(string name, string dept, string sub, double salary){
//       this->name = name ; // obj name prop = parameters
//       this->dept = dept;
//       this->sub = sub;
//       this->salary = salary;
//     }

//     //copy constructor
//     Teacher(Teacher &orgObj){  // pass by reference
//       cout<<"I  am a custom copy constructor"<<endl;
//           this->name = orgObj.name;
//           this->dept = orgObj.dept;
//           this->sub = orgObj.sub;
//           this->salary = orgObj.salary;
//     }

//      // methods or member functions - class ke functions
//      void changeDept(string newDept) {
//         dept = newDept;
//      }

//      //setter func - to set the value of a private func.
//      void setSalary(double s){ 
//         salary = s;
//      }

//      // getter func - to get the value of a private func.
//      double getSalary(){
//         return salary;
//      }

//      void getInfo(){
//       cout<<"name : "<<name<<endl;
//       cout<<"subject : "<<sub<<endl;
//      }

// };

// class Account
// {
// private:
//     /* data */
//     double balance;
//     string password; // data hiding   
// public: 
//    string accId;
//    string username;
// };


// int main() {
//  Teacher t1("muskan","ComputerScience", "C++", 25000); //constructor ko call - compiler constructor ko automatically call kr deta h
//  // Teacher t2;
// //  t1.name = "Muskan";
// //  t1.sub = "C++";
// // //  t1.salary = 72000; 
// //  t1.setSalary(25000);

// //  Teacher t2;
// //  Teacher t3;
// //  Teacher t4;
// // cout<<t1.name<< endl;
// // cout<<t1.dept<<endl;
// // // cout<<t2.dept<<endl;
// // cout<<t1.getSalary()<< endl;
// Teacher t2(t1); //custom copy constructor - invoke 

// t2.getInfo();
// return 0;
// }

// #include <iostream>
// #include<string>
// using namespace std;

//  class Student{
//    public:
//    string name;
//    double* cgpaPtr;

//    Student(string name, double cgpa){
//       this->name = name;
//       cgpaPtr = new double; // new memo allocation
//       *cgpaPtr = cgpa;
//    }

//    // for shallow copy
//    //  Student(Student &orgObj){
//    //     this->name = orgObj.name;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
//    //     this->cgpaPtr = orgObj.cgpaPtr; //static memory alloacation

//    // }

//    // for deep copy 
//     Student(Student &orgObj){
//        this->name = orgObj.name;
//        cgpaPtr = new double;
//        *cgpaPtr = *orgObj.cgpaPtr; //static memory alloacation

//    }

//  // destructor
//  ~Student(){
//    cout<<"I want to delete everything"<<endl;
//    delete cgpaPtr; //to remove dynamically allocated memeory 
//  }


//    void getInfo(){
//       cout<<"name :"<<name<<endl;
//       cout<<"cgpa :"<<*cgpaPtr<<endl;
//    }
//  };

// int main() {

//     Student s1("Muskan Jain", 8.95);
//     s1.getInfo();
//     Student s2(s1);
//    //  s1.getInfo();
//    //  *(s2.cgpaPtr) = 9.2;
//    //  s1.getInfo();
 
//    //  s2.name = "neha";
//    //  s2.getInfo();
// return 0;
// }

// #include <iostream>
// #include <string>


// using namespace std;

// // class person{

// //    public:
// //    string name;
// //    int age;


// //    // person(string name, int  age){
// //    //    this->name = name;
// //    //    this->age = age;
// //    // }

// // };


// class Person {
//     //name, age, roll no. ;

//     public:
//     int rollno;
//     string name;

// };

// class Student : public Person{

//    public: 

// int age;
// };

// class Teacher : public Person{
  
//    public:
//    string subject;
// };

// // class dest{

// //    public:

// //    ~dest(){
// //       cout<<"parent destructor....."<<endl;
// //    }
// // };

// // class me : public dest {

// //    public:

// //    ~me(){
// //       cout<<"child destructor..."<<endl;
// //    }

// //    void getInfo(){
      
// //    }
// // };

// int main(){ 
// // Student s1;

// // s1.name = "muskan jain";
// // s1.age = 19;
// // s1.rollno = 22;

// // s1.getInfo();

// // me m1;

// // m1.getInfo();

// // gradStu s1;
// // s1.name = "Muskan Jain";
// // s1.researchArea = "C++";

// // cout<<s1.name<<endl;
// // cout<<s1.researchArea<<endl;

// TA t1;
// t1.name = "tommy";
// t1.sub = "DSA";

// cout<<t1.name<<endl;
// cout<<t1.sub<<endl;

//    return 0;
// }


// #include <iostream>
// #include <string>

// using namespace std;

// class Parent{
// public:
    
//       void getInfo(){
//    cout<<"parent class :"<<endl;
//     }
// };

// class Child : public Parent{
//     public:
//    void getInfo(){
//       cout<<"child class"<<endl;
//     }
// };

// int main() {
// Parent p1;
// p1.getInfo();

// return 0;
// }

// #include <iostream>
// #include<string>
// using namespace std;

// void  fun(){
//  static int x =10;
//    cout<<"x: "<<x<<endl;
//    x++;
// }

// int main() {
//   fun();
//   fun();
//   fun();
// return 0;
// }


#include <iostream>
#include <string>
using namespace std;

class ABC{
   public:
   ABC(){
      cout<<"constructor\n";
   }

   ~ABC(){
      cout<<"destructor\n";

   }

};

int main() {
    if(true){
     static ABC obj;
    }

    cout<<"end of main fn\n";
return 0;
}