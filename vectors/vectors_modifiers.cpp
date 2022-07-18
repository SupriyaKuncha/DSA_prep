/*#include<iostream>
#include<vector>
void print_vector(std::vector<int> list)
{  
    list.push_back(4);
    
   for(int i=0;i<list.size();i++)
   {
    std::cout<<list[i]<<std::endl;
   }
}
int main()
{
    std::vector<int> data={1,2,3};
    for(int i=0;i<data.size();i++)
    {
        std::cout<<data[i]<<std::endl;
    }
    std::cout<<".........."<<std::endl;
    print_vector(data);
    std::cout<<".........."<<std::endl;
    print_vector(data);
    std::cout<<".........."<<std::endl;
    print_vector(data);
     std::cout<<".........."<<std::endl;
    print_vector(data);
}*/
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v);
int main()
{
   vector<int> vect1;
   int element,size;
   cout<<"Enter the size of an element: ";
   cin>>size;
   for(int i=0;i<size;i++)
   {
    cout<<"Enter the element into the list: ";
    cin>>element;
    vect1.push_back(element);
   }
   vect1.pop_back(); 
   display(vect1);
   vector<int>::iterator iter=vect1.begin();// by default iter is pointed to starting of the list
   vect1.insert(iter,5);//inserts 5 at the begining of the list display(vect1); 
   vect1.insert(iter+1,6);//iter+1 points to 2nd element i.e 1st index of the list
   display(vect1);
  
}
void display(vector<int> &v)
{
    for(int i=0;i<v.size();i++)
    {
        //cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

