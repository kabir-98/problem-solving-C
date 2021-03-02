//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U?fbclid=IwAR1ZIok5QVWss15-RXtybtSi7dqsdU_g5MiaytL_38R7SqGce-onkhkXJe0
#include <stdio.h>
#include <math.h>
int main()
{
    float num;
    scanf("%f", &num);
    float fraction = num - (int) num;
    float integer = num - fraction;
    if(fraction == 0){
        printf("int %.0f", num);
    }
    else{
        printf("float %.0f %.3f", integer, fraction);
    }
}
