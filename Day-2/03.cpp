#include<stdio.h>
#include<string.h>

class complex{
    private:
    char real[4];
    char img[5];

    public:
    complex(){        
        strcpy(this->real,"7");
        strcpy(this->img,"j8");        
    }
    complex(char *r, char *i){
        strcpy(this->real,r);
        strcpy(this->img,i);        
    }
    void printNum(){
        printf("Complex number is : %s + %s\n",real,img);
    }
};

int main(){

    char r[4],i[5];
    complex c1;
    c1.printNum();
    printf("Enter real number :");
    scanf("%s",r);
    printf("Enter imaginary number :");
    scanf("%s",i);
    complex c2(r,i);
    c2.printNum();

    return 0;
}