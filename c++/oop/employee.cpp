#include<iostream>
#include<string>
using namespace std;

class employee{


    int employee_num;// The employee number
    float employee_comp;  // The employee compensation
    
    public:
    void insert_employee ( ){       
        cout<<"Enter the number of employee please : ";
        cin>>employee_num;
        cout<<"Enter the comompensation of employee please : ";        
        cin>>employee_comp;

    }


    void Display_employee (){
        
        cout<<"The number of employee is : "<<employee_num<<endl;
        cout<<"The comompensation of employee is : "<<employee_comp<<endl;

    }

};


int main(){

employee t1, t2, t3;
t1.insert_employee();
t1.Display_employee();
t2.insert_employee();
t2.Display_employee();
t3.insert_employee();
t3.Display_employee();



    return 0;
}