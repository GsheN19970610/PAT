/*
1035. Password (20)
时间限制
400 ms
内存限制
65536 kB
代码长度限制
16000 B
To prepare for PAT, the judge sometimes has to generate random passwords for the users. The problem is that there are always some 
confusing passwords since it is hard to distinguish 1 (one) from l (L in lowercase), or 0 (zero) from O (o in uppercase). One 
solution is to replace 1 (one) by @, 0 (zero) by %, l by L, and O by o. Now it is your job to write a program to check the accounts 
generated by the judge, and to help the juge modify the confusing passwords.

Input Specification:
Each input file contains one test case. Each case contains a positive integer N (<= 1000), followed by N lines of accounts. Each 
account consists of a user name and a password, both are strings of no more than 10 characters with no space.

Output Specification:
For each test case, first print the number M of accounts that have been modified, then print in the following M lines the modified 
accounts info, that is, the user names and the corresponding modified passwords. The accounts must be printed in the same order as 
they are read in. If no account is modified, print in one line "There are N accounts and no account is modified" where N is the 
total number of accounts. However, if N is one, you must print "There is 1 account and no account is modified" instead.

Sample Input 1:
3
Team000002 Rlsp0dfa
Team000003 perfectpwd
Team000001 R1spOdfa
Sample Output 1:
2
Team000002 RLsp%dfa
Team000001 R@spodfa

Sample Input 2:
1
team110 abcdefg332
Sample Output 2:
There is 1 account and no account is modified

Sample Input 3:
2
team110 abcdefg222
team220 abcdefg333
Sample Output 3:
There are 2 accounts and no account is modified
*/

#include <iostream>
#include <cstring>
using namespace std;
char a[1001][11],p[1001][11];
int flags[1001];
bool needchange(char &c){
    if(c == '1' || c == '0' || c == 'l' || c == 'O'){
        switch(c){
            case '1': c = '@';break;
            case '0': c = '%';break;
            case 'l': c = 'L';break;
            case 'O': c = 'o';break;
        }
        return true;
    }
    return false;
}
int main(){
    int n,m = 0;
    bool flag = false;
    cin >> n;
    for(int i = 0; i < n; i++){
        scanf("%s %s",a[i],p[i]);
        flag = false;
        for(int j = 0; j < strlen(p[i]);j++){
            if(needchange(p[i][j])) flag = true;
        }
        if(flag){
            m++;
            flags[i] = 1;
        }
    }
    if(m == 0){
        if(n == 1){
            printf("There is 1 account and no account is modified\n");
        }
        else{
            printf("There is %d accounts and no account is modified\n",n);
        }
    }else{
        printf("%d\n",m);
        for(int i = 0; i < n; i++){
            if(flags[i] == 1){
                printf("%s %s\n",a[i],p[i]);
            }
        }
    }
    return 0;
}