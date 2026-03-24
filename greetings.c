#include <stdio.h>
struct Address{
    char city[20];
    char state[20];
    char country[20];
};
struct Dateofbirth{
    int day;
    int month;
    int year;
};
struct UserInfo{
    char name [20];
    int age;
    char gender[10];
    struct Dateofbirth dob;
    struct Address address;
};
//nested structure
//
void greetings(struct UserInfo fu){
printf("your age is %d\n", fu.age);
printf("hello %s\n ", fu.name);
printf("your gender is %s\n",  fu.gender);
printf("your date of birth is %d/%d/%d\n", fu.dob.day, fu.dob.month, fu.dob.year);
printf("your address is %s, %s, %s\n", fu.address.city, fu.address.state, fu.address.country);


}
int main(){
    struct UserInfo user={"prativa",1,"female",{3,03,1999},{ "lazimpat", "KTM", "nepal" }};

    greetings(user);

    return 0;
} 