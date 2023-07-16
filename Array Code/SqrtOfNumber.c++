#include<bits/stdc++.h>
using namespace std;
int binarysqrt( int x)
{
    if(x==0 || x==1)
    {
        return x;
    }
    int mid;
     int square;
    int start=0;
    int end = x;
    int ans=0;

    while(start <= end){
    mid= start+(end-start)/2;
    square= mid * mid;
    if(square == x)
    {
        return mid;
    }
    else if (square >  x)
    {
        end= mid -  1;
    }
    else{
     start = mid  +  1 ;
     ans = mid;
    }
    
}
return ans;
}
int main()
{
    int x=5;
    int ans= binarysqrt(x);
    
    cout<< "sqrt of " << x << " is "<< "" <<  ans <<  endl;
    return 0;
}