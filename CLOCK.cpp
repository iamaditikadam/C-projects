#include<iostream>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include<unistd.h>

using namespace std;
int main()
{
    int h,m,s;
    cout<<"Set time: \n";
    cin>>h>>m>>s;
 while(true)
 {
     system("cls");
     cout<<h<<":"<<m<<":"<<s<<endl;
     s++;
     if(s==60)
     {
         m++;
         s=0;
         if(m==60)
         {
             h++;
             m=0;
             if(h==12)
             {
                 h=1;
             }
         }
     }
     sleep(1);
 }
    

}


    
    
    



