#include<iostream>
#include<math.h>
#include<cstdlib>
#include<string>

using namespace std;



class Person
{
     private :   
         
    string FirstName;     // student name, max 49 characters
    string LastName;      // student family name
    int PersonalID ;      
    double Salary ;
    double WorkingHours ;
    double CostPerHour ; 
      
        public :  
              
               void set_FieldName();
                void get_FieldName();
                void gett_FieldName();
                void set_PersonalID();
               void set_Name();
               void LastNamesortList();
               void in_FirstName();
               void in_FamilyName();
               void in_Workinghour();
               void in_Costperhour();
                               };
                                    

class HRM
{
     private :  
             int n=0,i=0,x=8248001,y[100];
             bool flag=0;
             int  z[100];
             string h[100];
             double sal[100];
             int check=0;
     
     void ::HRM::AddPerson() {
      
        int x;
        char redo;
        
         do
           {
         n++;
        e[i].set_FieldName();
        i++;
               
        cout<<"\nThe employee with the following information has been added to the system:"<<endl;
        cout<<"\nFirst Name       Last Name       Personal ID         Salary per year (Euros)";
         cout<<"\n--------------   --------------  ------------       -------------------------"<<endl;
          for(int i=0; i<n; i++)
          {     
               e[i].get_FieldName();
           } 
                                 
                                
        cout<<"do u wont to add another employee"<<endl; 
         cin>>redo;
        }
        while((redo=='y'||redo=='Y'));
       
        }
               
     Person e[100] ;      
       Person temp[100]; 
    public : 
            
      void AddPerson();
      void DeletePerson();
      void SearchPerson();
      void UpdatePerson();
      void ReportList();
 
};
