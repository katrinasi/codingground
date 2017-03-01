#include <iostream>

using namespace std;

int main()
{
   
 int x;
 int y;
 int z;
 cout << " Ievadi 1. skaitli! " << endl;
 cin >> x;
 cout << " Ievadi 2. skaitli! " << endl;
 cin >> y;
 cout << " Ievadi 3. skaitli! " << endl;
 cin >> z;
 if(x>y&&x>z){
     if(z>y){
    cout << " Lielakais trisciparu skaitlis ir " <<x<<z<<y<< endl;
     }else{
         cout << " Lielakais trisciparu skaitlis ir " <<x<<y<<z<< endl;
     }
 } 
 if(y>x&&y>z){
     if(x>z){
         cout << " Lielakais trisciparu skaitlis ir " <<y<<x<<z<< endl;
     }else{
         cout << " Lielakais trisciparu skaitlis " <<y<<z<<x<< endl;
     }
     
 }
 if(z>y&&z>x){
     if(x>y){
         cout << " Lielakais trisciparu skaitlis ir " <<z<<x<<y<< endl;
     }else{
         cout << " Lielakais trisciparu skaitlis ir " <<z<<y<<x<< endl;
     }
     
 }
   
 
   
   
   
    
   return 0;
}

