#include<iostream>
#include<vector>
void print_vector(std::vector<int> &list)
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
}

