#include <stdio.h>
#include <math.h>

    int main(){

        int x,y,z;
        x=15,y=5,z=1;

        if(x>y & x>z){
            printf("%d", x);
        }
        else if(y>z & y>x){
            printf("%d", y);
        }
        else{
            printf("%d", z);
        }
        
     


        return 0;
    }
           
    
