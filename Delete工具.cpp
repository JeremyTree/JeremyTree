#include<bits/stdc++.h>
using namespace std;
int main()
{
	string delfile;
	printf("Tell me the file or file folder(like D:\\temp\\test.txt or D:\\temp) that you want to delete:\n");
	cin>>delfile;
	rmdir(delfile.c_str());
	return 0;
}