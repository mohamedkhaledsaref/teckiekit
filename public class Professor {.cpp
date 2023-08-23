#include <iostream>
using namespace std;
class  University()
{
    private:
        static University * instancPtr;
        University()
        {
            
        }

    public:
        University(const  University&obj) = delete;
     static University* getInstance()
  {
 
    if (instancPtr == NULL)
    {
    
      instancPtr = new University();
          
    }
      return instancPtr;
  }
  
    void add_person()
    {

    }
    void update_person()
    {

    }
    void remove_person()
    {

    }
};
University* University ::instancPtr = NULL;

class Professor : public person {
    private: 
    Department department;
    double salary;
    String degree;
    public:
    
     Professor() {
        this.department = new Department();
        this.salary = 0.0;
        this.degree = "";
    }

     Professor(Department department, double salary, String degree) {
        this.department = department;
        this.salary = salary;
        this.degree = degree;
    }

     void setDepartment(Department department) {
        this.department = department;
    }

     Department getDepartment() {
        return department;
    }

     void setSalary(double salary) {
        this.salary = salary;
    }

     double getSalary() {
        return salary;
    }

     void setDegree(String degree)