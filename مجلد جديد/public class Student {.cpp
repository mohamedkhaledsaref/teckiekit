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
public class Student {
    private int level;
    private double gpa;

    public void setLevel(int level) {
        this.level = level;
    }

    public int getLevel() {
        return level;
    }

    public void setGpa(double gpa) {
        this.gpa = gpa;
    }

    public double getGpa() {
        return gpa;
    }
}