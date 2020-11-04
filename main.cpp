#include <iostream>
using namespace std;
class Arr
{
private:
    int** arr1;
    int n,m;
public:
    Arr()
    {
    	cout<<"Please enter rows and colms:";
    	cin>>n>>m;
        arr1=new int*[n];
        for (int i=0;i<n;i++)
        {
        	arr1[i]=new int[m];
		}
        for (int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                    cout<<"Enter a number:";
                    cin>>arr1[i][ j];
            }
        }
    }

    void print()
    {
        for (int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
			
            cout<<arr1[i][j]<<",";
            }
        cout<<endl;
        }
    }
       ~Arr(){
	   for (int i = 0; i < n; ++i)
        	delete[] arr1[i];
	delete[] arr1;}
       };
int main()
{
	
    Arr a;
    a.print();
    return 0;
}
