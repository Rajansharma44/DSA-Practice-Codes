#include <bits/stdc++.h>
 using namespace std;

 int main()
 {
    pair<int,int>p_array[3];
    p_array[0]={7,9};
    p_array[1]={9,0};
    p_array[2]={3,5};
    for(int i=0;i<3;i++)
    {
        cout << p_array[i].first << p_array[i].second << endl;
    }
 } 


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     pair<int,string>p_array[n];
//     for(int i=0;i<n;i++)
//     {
//         int firstnum;
//         int secondnum;
//         cin >> firstnum >> secondnum;
//         p_array[i] =  make_pair(firstnum,secondnum);
         
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout << p_array[i].first << " " << p_array[i].second << endl;
//     }
   

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     pair<int, int> p_array[n];

//     for (int i = 0; i < n; i++)
//     {
//         int firstnum;
//         string secondnum;
//         cin >> firstnum >> secondnum;
//         p_array[i] = make_pair(firstnum, secondnum);
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << p_array[i].first  << p_array[i].second << endl;
//     }

//     return 0;
// }

