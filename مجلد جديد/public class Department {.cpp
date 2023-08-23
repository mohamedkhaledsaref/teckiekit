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
public class Department {
    private String name;
    private int capacity;
    private double requiredGpa;

    public Department(String name, int capacity, double requiredGpa) {
        this.name = name;
        this.capacity = capacity;
        this.requiredGpa = requiredGpa;
    }

    // getters and setters
}