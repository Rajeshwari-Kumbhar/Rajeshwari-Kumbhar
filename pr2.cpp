#include <iostream>
#include <string>

using namespace std;
 class student{
    public:
    string name;
    int roll;
    
 };

 int main()

 {
     student s;
     s.name="Rajeshwari";
     s.roll=137;
     cout << "\n name:"<<s.name << "\n roll: "<< s.roll;
     return 0;
 }