    #include<iostream>
    using namespace std;
    int fibonnaci(int fib){
        if(fib==1|| fib==0){
            return 1;

        }
        int badanumber= fib*fibonnaci(fib-1);
        return badanumber;
        
    }

    int main(){
        int num=10;
        // return the fibonnaci 

        cout<<"the factorial is "<<fibonnaci(num);


    }