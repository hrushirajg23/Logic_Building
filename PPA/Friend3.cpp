#include <iostream>
using namespace std;


/*Hello  cha declaration Demo chya var kelay karan , 
we are telling in demo ki display function of Hello is friend of Demo. 
Karan compiler la sequentially compile kartana kalla pahije ki Hello kay ahe. Jar Compiler
 la kallach nahi ki HEllo kay  ahe ani 
 tyatli method kuthli apan friend declare kartoy ti tar to error deil
*/
class Hello     
{
    public:
    void Display();      //void display is defaultly private behaviour of Hello class, as no access specifier is given 
};

class Demo
{
public:
    int i;

private:
    int j;

protected:
    int k;

public:
    Demo()
    {
        i = 10;
        j = 20;
        k = 30;
    }
    friend void Hello::Display(); //Hello navaycha class madhla dissplay function la friend declare kela 
};

void Hello::Display()       //this function is of hello class 
{
    Demo obj;
    cout << "Value of i:" << obj.i << endl;
    cout << "Value of j:" << obj.j << endl;
    cout << "Value of k:" << obj.k << endl;
}


int main()
{
    Hello hobj;
    hobj.Display();
    
    return 0;
}