#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vector1={1,2,3};
    vector<int> vector2{4,5,6};
    vector<int> vector3(5,12);
    vector1.push_back(4);
    cout << "vector1 = ";
    for(int i=0;i<vector1.size();i++)
    {
        cout<<vector1.at(i)<<endl;
    }
    cout<<"................"<<endl;
    cout<<vector2[2]; 
    return 0;
}