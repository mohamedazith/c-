#include<iostream>
#include<map>
using namespace std;
void tranformMap(std::map<int,char> &mapIp)
{
    int start, cur = 0, lastValue;
    map<int,char>::iterator it = mapIp.begin();
    auto itnext = it;
	for(int j =0; j < mapIp.size(); it++, j++)
	{    
	    cur = it->first;
        itnext++;
        if(itnext != mapIp.end())
        {
           start = itnext->first; 
        }
        else
        {
            start = 26;
        }
        if(j == 0)
        {
           for(int i = j; i < start; i++)
		   {
    		   cout<<"\n" << i << " " << it->second;
           }
        }
        else
        {
		for(int i = cur; i < start; i++)
		{
		   cout<<"\n" << i << " " << it->second;
		}
        }
		cur = start;
		lastValue = it->second;
    } // start to end 
}


int main()
{
   std::map<int,char> ipMap = {{0, 'a'}, {5, 'b'}, {7, 'c'}};
   tranformMap(ipMap);
   return 0;
}
