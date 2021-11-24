#include <bits/stdc++.h>
#include <iostream>
#include <sys/stat.h>
#include <sys/types.h>
using namespace std;
  
int main()
	  
{
	      if (mkdir("geeksforgeeks", 0777) == -1)
		              cerr << "Error :  " << strerror(errno) << endl;
	        
	          else
			          cout << "Directory created";

		  return 0;
}
