#include <iostream>

using namespace std;

int main()
{
   int x; 
   int y;
   int rez;
   cout << " Ievadi dalitaju! " << endl;
   cin >> x;
   cout << " Ievadi dalamo! " << endl;
   cin >> y;
   if(y==0){
       // Sis izpildisies, ja y bus 0
       cout << " Ar nulli dalit nedrikst " << endl;
   }else{
       // sis izpildisies, ja x nebus vienads ar 0
       rez = x / y;
      cout << " Tavs dalijums ir " << rez << endl;
   }   
    
   
   
   
   
   return 0;
}

