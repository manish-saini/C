#include<iostream>
using namespace std;
int main()
{
    int a,b,i,j,matrix[10][10],transpose[10][10];
    cin>>a>>b;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        cin>>matrix[i][j];
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            transpose[j][i]=matrix[i][j];
        }
    }
    for(i=0;i<b;i++)
    {
        for(j=0;j<a;j++)
        {
            cout<<transpose[i][j]<<" ";
            cout<<'\t';
        }
    }
    return 0;
}
