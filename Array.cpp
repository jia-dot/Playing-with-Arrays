#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
class Array                     //models a normal C++ array 
{ 
private: 
int* ptr;                 //pointer to Array contents 
int size;                 //count of Array 
int count=0;				// counnt of elements in array

public: 
Array(int s)              //one-argument constructor 
{ size = s;              //argument is size of Array
 ptr = new int[s];      //make space for Array 
 }
  
 ~Array()                  //destructor 
 { delete[] ptr; 
 }
  
 int& operator [] (int j)  //overloaded subscript operator 
 { 
 return *(ptr+j); 
 }
  
 int search(int value)
 {
 for(int i=0;i<count;++i)
 {if(*(ptr+i)==value)
 return i;
 } return -1;}
 
 void sort()
{
  int temp;
    for(int i=0;i<count-1;++i)
        {for(int j=i+1;j<count;j++)
             {
                    if(*(ptr+i) > *(ptr+j))
                  {
                        temp = *(ptr+j);
                       *(ptr+j) = *(ptr+i);
                       
                       *(ptr+i)= temp;
					       }
              }    
           }
		   }
  
           
 void sortdes()
           {
		      int temp;
                   for(int i=0;i<count-1;++i)
                    {for(int j=i+1;j<count;j++)
             {
                    if(*(ptr+i)< *(ptr+j))
                  {
                        temp = *(ptr+j);
                       *(ptr+j )= *(ptr+i);
                       *(ptr+i )= temp;
                   }
              }   
           }
		   }
		           
void display()
	{ 
	for(int i=0;i<count;++i)
	{
	cout<<*(ptr+i)<<endl;}	 
	  }

void del(int index)
{int j=index;
for(int i=index+1;i<count;i++)
{
*(ptr+j)=*(ptr+i);
j++;
}	
count--;
}
	
void getdata(int count)
{for(int i=0;i<count;++i)
cin>>*(ptr+i);

}
void add(int a)
{
	*(ptr+count)=a;
	count++;
}
void swapping()
{
	int a;
	int b;
	cout<<" which 2 indexes do u want 2 swap? Enter first index ";
	cin>>a;
	cout<<"Enter 2nd index ";
	cin>>b;
	swap(*(ptr+a),*(ptr+b));
}

float average()
{
	int sum=0;
	float ave=0;
	for(int i=0;i<count;++i)
     {
	 
		
		sum+=*(ptr + i);
	
}
	ave=sum/count;

	return ave;
}

void add(int index,int value)
{
if(index>=size)
{cout<<" Cannot add in array,Your index is greater than Size "<<endl<<"Try adding at index less than 10";
return;}
for(int i=count-1;i<count;i--)
{ if(i==index-1)
break;
else
*(ptr+i+1)=*(ptr+i);}
*(ptr+index)=value;
count++;
}


 }; 
 
 int main()
 {cout<<"               Welcome to Arrays world!  "<<endl;
 Array a1(10);
a1.add(4); 
a1.add(5);
 cout<<"Enter 5 integers one by one.."<<endl;
 //a1.getdata(5);
 int choice;
 do{
 
 cout<<"1. Add integer at The last index"<<endl;
 cout<<"2. Add anywhere in the array"<<endl;
 cout<<"3. Display Array"<<endl;
 cout<<"4. Search from array"<<endl;
 cout<<"5. Sort Array in Ascending Order"<<endl;
 cout<<"6. Sort Array in Descending Order"<<endl;
 cout<<"7. Delete from Array"<<endl;
 cout<<"8. Find Average"<<endl;
 cout<<"9. Swap elements in Array"<<endl;
 cout<<"10.Exit"<<endl;
 cout<<endl<<"Enter Your Choice..";
  cin>>choice;
 switch(choice)
 {
 	case 1:
 		{
		cout<<"Enter value to Add ";
 		int num;
 		cin>>num;
 		a1.add(num);
 		cout<<"displaying Your Array.."<<endl;
 		a1.display();
		 break;}
 	
 	case 2:
 		{cout<<"Give an index ";
 		int in;cin>>in;
 		cout<<"Enter value to Add ";
 		int num;cin>>num;
 		a1.add(in,num);
 		cout<<"displaying Your Array.."<<endl;
 	a1.display();
 	break;
		 }
	case 3:
		{cout<<"displaying Your Array.."<<endl;
 	a1.display();
 	break;
		}
		case 4:
			{
				cout<<"Which value You want to search";
 int tosearch;
 cin>>tosearch;
 cout<<"the searched value is at index ";
 cout<<a1.search(tosearch)<<endl;
 break;
			}
			case 5:
				{
					cout<<"sort assending: "<<endl;
 a1.sort();
 a1.display();
 break;
				}
				case 6:
					{
						cout<<"sort desending:"<<endl;
 a1.sortdes();
 a1.display();
			break;		}
			case 7:
				{
			cout<<"Delete at index number ? ";
 int index=0;
 cin>>index;
 a1.del(index);
 a1.display();break;
				}
				case 8:
					{cout<<"average"<<endl;
 cout<<a1.average();break;
					}
					case 9:
						{  
 cout<<"swapping"<<endl;
 a1.swapping();
 a1.display();break;
						}
						case 10:
							{ 
							break;
							}
 }}while(choice!=10);
 system("pause");
 return 0;
 }
