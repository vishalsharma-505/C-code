#include <iostream>
using namespace std;

class Character{
    public:
    string name;
    int age;
    string race;
    int height;
    int attack;
    Character (){
    cout<<"input the shi"<<endl;
    cin>>name;
    cin>>age;
    cin>>race;
    cin>>height;
    // cin>>attack;
    
    }
    void Name(){
        cout<<name<<endl; 
    }
    void Age () { 
        cout<<age<<endl; }
        
        void Race(){
            cout<<race<<endl;
        
        }
       
        void Height(){
            cout<<height<<endl;
            
        }
        void Attack() {
            cout << height*10<<endl;
            // return height*10
            
            
        }
};
        int main () {
            Character cc;
            cc.Name();
            cc.Age();
            cc.Race();
            cc.Height();
            cc.Attack();
            return 0;
            }
        
    