#include<bits/stdc++.h>
using namespace std; 



class Management
{

   public:
   queue<int> slot1;
   queue<int> slot2;
   queue<int> slot3;
   queue<int> slot4;
   queue<int> slot5;
   queue<int> slot6;
   queue<int> slot7;
   queue<int> slot8;


   void slotbooking()
   {
      
     while(true)
     
     { 
      int tmp;
      cout<<"Welcome to slot booking of IITH Hospital"<<endl;
      cout<<"Enter 1 for checking slot available"<<endl;
      cout<<"Enter 2 for proceeding with slot booking"<<endl;
      cout<<"Enter 3 for exit"<<endl;
      cin>>tmp;
      if(tmp==1)
      {
         cout<<"Find the info of available slots below"<<endl;
         if(slot1.size()<5)
         {
            cout<<"slot1 : Available"<<endl;
         }
         else if(slot1.size()==5)
         {
            cout<<"slot1 : Unavailable"<<endl;
         }

         if(slot2.size()<5)
         {
            cout<<"slot2 : Available"<<endl;
         }
         else if(slot2.size()==5)
         {
            cout<<"slot2 : Unavailable"<<endl;
         }

         if(slot3.size()<5)
         {
            cout<<"slot3 : Available"<<endl;
         }
         else if(slot3.size()==5)
         {
            cout<<"slot3 : Unavailable"<<endl;
         }

         if(slot4.size()<5)
         {
            cout<<"slot4 : Available"<<endl;
         }
         else if(slot4.size()==5)
         {
            cout<<"slot4 : Unavailable"<<endl;
         }

         if(slot5.size()<5)
         {
            cout<<"slot5 : Available"<<endl;
         }
         else if(slot5.size()==5)
         {
            cout<<"slot5 : Unavailable"<<endl;
         }

         if(slot6.size()<5)
         {
            cout<<"slot6 : Available"<<endl;
         }
         else if(slot6.size()==5)
         {
            cout<<"slot6 : Unavailable"<<endl;
         }

         if(slot7.size()<5)
         {
            cout<<"slot7 : Available"<<endl;
         }
         else if(slot7.size()==5)
         {
            cout<<"slot7 : Unavailable"<<endl;
         }

         if(slot8.size()<5)
         {
            cout<<"slot8 : Available"<<endl;
         }
         else if(slot8.size()==5)
         {
            cout<<"slot8 : Unavailable"<<endl;
         }
      }

      if(tmp==2)
      {
         cout<<"Enter the slot you want to select :"<<endl;
         int flag ;

         if(flag==1)
         {
            if(slot1.size()==5)
            {
                cout<<"Slot is already full please select some other slot"<<endl;
                break;
            }
            
            slot1.push(1);
            cout<<" Your slot is booked"<<endl;
         }
         

         if(flag==2)
         {
            if(slot2.size()==5)
            {
                cout<<"Slot is already full please select some other slot"<<endl;
                break;
            }
            
            slot2.push(1);
            cout<<" Your slot is booked"<<endl;
         }



         if(flag==3)
         {
            if(slot3.size()==5)
            {
                cout<<"Slot is already full please select some other slot"<<endl;
                break;
            }
            
            slot3.push(1);
            cout<<" Your slot is booked"<<endl;
         }



         if(flag==1)
         {
            if(slot4.size()==5)
            {
                cout<<"Slot is already full please select some other slot"<<endl;
                break;
            }
            
            slot4.push(1);
            cout<<" Your slot is booked"<<endl;
         }



         if(flag==1)
         {
            if(slot5.size()==5)
            {
                cout<<"Slot is already full please select some other slot"<<endl;
                break;
            }
            
            slot5.push(1);
            cout<<" Your slot is booked"<<endl;
         }



         if(flag==1)
         {
            if(slot6.size()==5)
            {
                cout<<"Slot is already full please select some other slot"<<endl;
                break;
            }
            
            slot6.push(1);
            cout<<" Your slot is booked"<<endl;
         }



         if(flag==1)
         {
            if(slot7.size()==5)
            {
                cout<<"Slot is already full please select some other slot"<<endl;
                break;
            }
            
            slot7.push(1);
            cout<<" Your slot is booked"<<endl;
         }



         if(flag==1)
         {
            if(slot8.size()==5)
            {
                cout<<"Slot is already full please select some other slot"<<endl;
                break;
            }
            
            slot8.push(1);
            cout<<" Your slot is booked"<<endl;
         }

      }

     }

   }
   
};


int main()
{
   Management  IITH[30];
   



    return 0;
}
