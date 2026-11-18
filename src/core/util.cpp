#include<iostream>
#include "util.h"
#include<cstring>
using namespace std;

int clampInt(int value, int minVal, int maxVal)
{
	if(value<minValue)
		{
		return minValue;
		}
	else if(value>maxVal)
		{
		return maxVal;
		}
	else
		{
		return value;
		}
}


void trimWhitespace(char str[])
{
	if(str[0]==0;
	{
		return 0;
	}
	int start=0;
	while(str[start]==' ' || str[start]=='\' || str[start]=='\n' || str[start]=='\r')
	start++;
	int end=std::strlen(str)-1;
	while(end>=start && str[end]==' ' || str[end]=='\r' || str[end]=='\n')
	{
		end--;
	}
	int writeIdx=0;
	for(int i=start;i<=end;i++)
	{
		str[writeIdx++]=str[[i];
	}
	str[writeIdx]='\0';
}

bool stringEquals(const char* a, const char* b) {
    if (a==nullptr||b==nullptr) 
	{
        return a==b;
   	}

    int i = 0;
    while (a[i]!='\0' && b[i]!='\0') {
        if (a[i]!=b[i]) 
	{
            return false;
        }
        i++;
    }
    return (a[i]=='\0' && b[i]=='\0');
}

void printHeader(const char* title) {
    std::cout << "========================================\n";
    if (title!=nullptr) 
	{
        std::cout<<title<<"\n";
	}
    std::cout<<"========================================\n";
}

void clearScreen() {
	std::cout<<"\033[2J\033[1;1H";
}
