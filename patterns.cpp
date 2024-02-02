//Pattern 10
/*#include <iostream>
using namespace std;

void pattern10(int N)
{
    for(int i=1;i<=2*N-1;i++){
        int stars = i;

        if(i>N)stars =2*N-i;

        for(int j=1;j<=stars;j++){
            cout<<"*";
        }

        cout<<endl;
    }
}

int main()
{
    int N=5;
    pattern10(N);

    return 0;
}*/

//<---------------------------------------------------------->//
/*#include <iostream>
using namespace std;

void pattern11(int N){
   int start =1;

   for(int i=0; i<N;i++){

    if(i%2 ==0) start =1;

    else start =0;

    for(int j=0;j<=i;j++){
        cout<<start;
        start =1-start;
    }

    cout<<endl;


   }

}

int main()
{
    int N=5;
    pattern11(N);

    return 0;
}*/

#include <iostream>
using namespace std;

void pattern12(int N){

 int spaces = 2*(N-1);

 for(int i=1;i<=N;i++){

    for(int j=1;j<=i;j++){
        cout<<j;

    }

    for(int j=1;j<=spaces;j++){
        cout<<" ";
    }

    for(int j=i;j>=1;j--){
        cout<<j;
    }

    cout<<endl;

    spaces-=2;
 }

}

int main ()
{
    int N=5;
    pattern12(N);

    return 0;
}