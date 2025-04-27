#include<bits/stdc++.h>
using namespace std;

void printName(string name){
    cout << "Hey " << name;
}

int sum(int num1, int num2){
    int num3 = num1 + num2;
    return num3;
}

//pass by value
/*void doSomething(string s){
    s[0] = 't';
    cout << s << endl;
}*/

//pass by reference
void doSomething(string &s){
    s[0] = 't';
    cout << s << endl;
}

void doSomthng(int arr[], int n){
    arr[0] += 100;
    cout << "Value inside function: " << arr[0] << endl;
}


int main(){
    //User Input/Output

    // cout << "Hey!" << endl;
    // int x, y;
    // cin >> x >> y;
    // cout << "Value of x: " << x << " and y: " << y;

    //Data Types

    // int, long,long long, float, double
    //string and getline
    // string str;
    // getline(cin, str);
    // cout << str;
    //char

    //Write a program that takes an input of age
    // and prints if you are adult or not
    // >= 18, yes
    // < 18, no

    /*
    int age;
    cin >> age;
    if(age >= 18) {
        cout << "You are an adult!";
    }
    else{
        cout << "You are not an adult!";
    }
    */

    /*
    A school has following rules for grading system:
    a. Below 25 - F
    b. 25 to 44 - E
    c. 45 to 49 - D
    d. 50 to 59 - C
    e. 60 to 79 - B
    f. 80 to 100 - A
    Ask user to enter marks and print the corresponding grade.
    */
    /*
    int marks;
    cin >> marks;
    if(marks < 25){
        cout << "F";
    }
    else if(marks <= 44){
        cout << "E";
    }
    else if(marks <= 49){
        cout << "D";
    }
    else if(marks <= 59){
        cout << "C";
    }
    else if(marks <= 79){
        cout << "B";
    }
    else if(marks <= 100){
        cout << "A";
    }
    */

   /*
   Take the age from the user and then decide accordingly
   1. If age < 18,
      print-> not eligible for job
   2. If age >= 18 and age <=54,
      print-> "eligible for job"
   3. If age >= 55 and age <= 57,
      print-> "eligible for job but retirement soon."
   4. If age > 57,
      print-> "retirement time"
   */
    
    /*
    int age;
    cin >> age;
    if(age < 18){
        cout << "not eligible for job";
    }
    else if(age <= 57){
        cout << "eligible for job";
        if(age >= 55){
            cout << ", but retirement soon.";
        }
    }
    else {
        cout << "retirement time";
    }
    */

    /*
    Take the day no and print the corresponding day
    for 1 print Monday,
    for 2 print Tuesday and so on for 7 print Sunday.
    */

    /*
    int day;
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        cout << "Invalid";
    }
    */

    // 1D Array
    /*
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

    cout << arr[3];
    */

    // 2D Array
    /*
    int a[3][5];

    a[1][3] = 78;
    cout << a[1][3];
    */

    //Strings
    /*
    string s = "Shivangi";
    int len = s.size();
    s[len - 1] = 'u';
    cout << s[len - 1];
    */

    // int i;
    // for(i=1;i<=25;i=i+5){
    //     cout << "Shivangi " << i << endl;
    // }
    // cout << i << endl;

    // int i = 1;
    // while(i<=5){
    //     cout << "Shivangi " << i << endl; 
    //     i = i + 1;
    // }
    
    // int i = 2;
    // do{
    //     cout << "Shivangi " << i << endl; 
    //     i = i + 1;
    // }while(i<=1);
    // cout << i << endl;

    //Functions are set of code which performs something for you
    //Functions are used to modularise code
    //Functions are used to increase readability
    //Functions are used to use same code multiple times
    // void -> which does not returns anything
    // return
    // parameterised
    // non parameterised

    // string name;
    // cin >> name;
    // printName(name);

    //Take two numbers and print its sum
    /*
    int num1, num2;
    cin >> num1 >> num2;
    int res = sum(num1 , num2);
    cout << res;
     */

    // string s = "raj";
    // doSomething(s);
    // cout << s << endl;

    int n=5;
    int arr[5];
    for(int i=0;i<n;i=i+1){
        cin >> arr[i];
    }

    doSomthng(arr, n);
    cout << "Value inside int main: " << arr[0] << endl;

    return 0;
    
}


