#include<iostream.h>
#include<conio.h>
#include<math.h>
class data
{
public:
  int l,b,h;
   void gets()
   {cout<<"\nenter l: "<<endl;
    cin>>l;
    cout<<"\nenter b :";
    cin>>b;
    cout<<"\nenter h :";
    cin>>h;
   }
};
class area:public data
{  float ar;
 public:
     void arshow()
     { gets();
     ar=2*((l*b)+(l*h)+(b*h));
     cout<<"\narea = "<<ar<<endl;
     }
};
class volume:public data
{  float vol;
public:
  void showvol()
  {gets();
  vol=(l*b*h);
  cout<<"\nvolume is= "<<vol;
  }
};
int main()
{ clrscr();
 area a1;
volume v1;
a1.arshow();
v1.showvol();
getch();
return 0;
}