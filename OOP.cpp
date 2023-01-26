#include <iostream>

using namespace std;


class Student {
    
    private:
        double gpa;
    public: 
        string name;
        string major;

        Student (){
            name = "no name";
            major = "no major";
            gpa = 0;
        };

        Student(string aName, string aMajor, double aGpa){

            name = aName;
            major = aMajor;
            setGPA (aGpa);
        };

        void setGPA (double aGpa){
            if(aGpa < 4 && aGpa >0){
                gpa = aGpa;
            }
            else{
                gpa = 0;
            };
        }
        
        double getGPA(){
            return gpa;
        }

        bool HasHonor (){
            if (gpa > 3.5){
                return true;
            };
            return false;
        }

};


int main(){

    Student st1("Jim","Business",3.63);
    Student st2("Pam","Art",2.5);
    Student st3;

    cout << st1.name << endl;
 //   cout << st1.gpa << endl;
    cout << st1.HasHonor() << endl;
    cout << st2.name << endl;
 //   cout << st2.gpa << endl ;
    cout << st2.HasHonor() << endl;
    cout << st3.name << endl;
     
    st1.name = "josef";
    cout << st1.name << endl;

    st1.setGPA(3.4);
    cout << st1.HasHonor() << endl;
    cout << st1.getGPA() << endl;



    return 0;
}