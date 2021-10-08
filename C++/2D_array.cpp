// 2D array

#include <iostream>
using namespace std;

int main()
{
    int arr[6][6];
    int count,a,b,max,c,d,e,x,y,i,j;
    int check[3][3];
    count=a=b=c=d=e=0;
    max= -100;

    // cout<<max<<endl<<endl;

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }
    }
    // for (int i = 0; i < 6; i++) {
    //     for (int j = 0; j < 6; j++) {
    //         cout << arr[i][j];
    //     }
    //     cout<<endl;
    // }
    // cout<<max<<endl<<count<<endl<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl;
    i=j=0;

        for(int i=0;i<4;i++){
            c=i;
            for(int j=0;j<4;j++){
                count=0;
                d=j;
                for (int x=0;x<3;x++) {
                    for (int y=0;y<3;y++) {
                        a=x+c;
                        b=y+d;
                        check[x][y]=arr[a][b];
                        e=check[x][y];
                        count=count+e;
                        if (x==1 && y==0){
                            count=count-e;
                        }
                        if (x==1 && y==2){
                        count=count-e;
                        }
                        // cout<<e;
                        e=a=b=0;
                    }
                }
                if(count>max){
                    max=count;
                    // cout<<"Changes"<<endl;
                }
                // cout<<endl;
                // cout<<count<<endl<<max<<endl<<endl;

            }
        }
    // cout<<&e<<endl;
    cout<<max;

    return 0;
}