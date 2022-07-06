#include <iostream>
#include <cstring>

using namespace std;
class string1{
   private:
           //character array to denote string 
           char str[200];
   public:
  
          //function declarations 
          void getdata();
          void display();
          void operator= (string1 str1);
          void operator+ (string1 str1);
          void length ();
};


void string1::getdata()
{
  cout<<"\nEnter the string : ";
  cin>>str;
}


void string1::display()
{
   cout<<"\n"<<str;
}


void string1::operator= (string1 str1)
{
   strcpy(str1.str,str);
   cout<<"\n\tCopied String is : "<<str1.str;
}


void string1::operator+ (string1 str1)
{
   strcat(str,str1.str);
   cout<<"\n\t--String After Concat is : "<<str;
}


void string1::length()
{
    int len=0, i=0;
    while(str[i])
    {
        len++;
        i++;
    }
    cout<<"\nLength = "<<len;
    cout<<endl;
}

int main()
{
    int opt,c,opt1=1;
	
    string1 a,b;
	
    while(opt1==1 && opt!=4)
	{
	
    cout<<"\n\t\t\tChoose the operation to be performed\n\t1.String Copy\n\t2.Concat\n\t3.String Length\n\t4.Exit\n\t";
    cout <<"\nEnter your choice";
    cin>>opt;
	
     switch(opt)
      {
             case 1:
                       a.getdata();
					   
                       a=b;
                       break;
             case 2:  
                      cout<<"\nEnter the 1st string-\n";
                      a.getdata();
                      cout<<"\nEnter the 2nd string-\n";
                      b.getdata();
					 
                     a+b;  
                     break;
            case 3: 
                    cout<<"\nEnter the string\n";
                    a.getdata();
                    a.length();
                    break;
            case 4:
                    return 0;
			 
			 default: cout<<"Invalid choice..try again\n";
      } 
       if(opt!=4){
       cout<<"\n\n\tDo you want to continue(Press 1 to continue)";
       cin>>opt1;}
     }

    return 0;
}