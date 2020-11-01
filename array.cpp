#include <iostream>
#include <array>
#include <string>

int myArray[] = {0,0,0,0,1,1,1,1,0,0,0,0,0,0,0};

int MostConsecutiveOnes(int index){
    int counter = 0;
    int max = 0;
    
    for(int i = 0; i < 15; i++){
        if(myArray[i + 1] == 1 && myArray[i] == 1)
            counter++;
        else{
            if(max < counter) 
                max = counter;

            counter = 0;
        }
    }
    return max == 0 ? 0 : max + 1;
}

int main(){
    std::cout<<MostConsecutiveOnes(0);
    return 0;
}
