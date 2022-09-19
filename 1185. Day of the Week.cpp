class Solution {
public:
string dayOfTheWeek(int day, int month, int year) {
string str[]={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
int mon[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int sum=4;

    for(int i=1971;i<year;i++){
        if((i%4==0 && i%100 != 0) || i%400 ==0)
            sum+=366;
        else
            sum+=365;
        }
    for(int i=1;i<month;i++){
        if(i==2 && ((year%4==0 && year%100 != 0) || year%400 ==0))
            sum+=1;
        sum+=mon[i];
    }
    sum+=day;
    return str[sum%7];
}
};
