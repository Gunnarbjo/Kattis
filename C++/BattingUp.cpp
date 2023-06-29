#include<iostream>
int main(){
    int inp,num,cnt=0;
    double sum=0.0;
    std::cin>>inp;
    for(int i=0;i<inp;i++){
        std::cin>>num;
        if(num>=0){
            sum+=num;
            cnt++;
        }
    }
    std::cout<<sum/(cnt*1.0);
}
