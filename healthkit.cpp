
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
using namespace std;

float calculateBmi(float weight,float height)
    {
    return weight/(height * height);
    }
void Bmi()
{
    float height,weight,bmi;
    int cond,opt;
    cout<<"Enter the height in meters:"<<endl;
    cin>>height;

    cout<<"enter the weight:";
    cin>>weight;

    bmi = calculateBmi(weight,height);
    cout<<" Your BMI is: "<<bmi<<endl<<endl;

    if(bmi<18.5)
    {
        cond=1;
    cout<<"You are under weight.";
    }
    else if(bmi>18.5 && bmi<24.9)
    {
        cond=2;
    cout<<"Your weight is normal.";
    }
    else if(bmi>25)
    {
        cond=3;
    cout<<"You are over weight";
    }
    
}

//TAKING INPUT FROM USER

void input()
{
    int age,ch;
    float weight,height;
    cout<<"\nEnter your Height:\t";
    cin>>height;
    cout<<"\nEnter your Weight:\t";
    cin>>weight;
    cout<<"\nEnter if you have any of the above disease: 1)b.p.\t2)diabetes";
    cin>>ch;
    
    
    

}
int main()
{
    float height,weight,bmi;
    int cond,opt;
    cout<<"1.Calculate BMI\t2.DIET PLANS\n";
    cin>>opt;
    if(opt==1)
    {
        Bmi();
            system("Color 0B");
             cout << "\t\t\t\t*-------------------------------------------------------*\n";

    // Menu options with clear formatting and missing semicolon fixed
    cout << "\t\t\t\t| 1. UNDERWEIGHT                                         |\n";
    cout << "\t\t\t\t| 2. HEALTHY                                             |\n";
    cout << "\t\t\t\t| 3. OVERWEIGHT                                          |\n";
    cout << "\t\t\t\t| 4. Do you have any of the diseases mentioned below?    |\n";
    cout << "\t\t\t\t|     1. B.P.                                            |\n";
    cout << "\t\t\t\t|     2. Diabetes                                        |\n";
    cout << "\t\t\t\t| 5. EXIT                                                |\n";

    // Bottom border
    cout << "\t\t\t\t*-------------------------------------------------------*\n";
int option,ch;
cout<<"\nenter condition\n";
cin>>cond;
switch(cond)
{
    case 1:
    {
        ShellExecute(NULL, "open", "file:///C:/Users/saksh/OneDrive/Documents/underweight.pdf", NULL, NULL, SW_SHOWNORMAL);
    }break;
    case 2:
    {
        ShellExecute(NULL, "open", "file:///C:/Users/saksh/OneDrive/Documents/CN%20-%20Unit%202.pdf", NULL, NULL, SW_SHOWNORMAL);
    }break;
    case 3:
    {
        ShellExecute(NULL, "open", "file:///C:/Users/saksh/OneDrive/Documents/CN%20-%20Unit%202.pdf", NULL, NULL, SW_SHOWNORMAL);
    }
    case 4:
    {
        cout<<"CHOOSE A NUMBER\n1. B.P.\t2.Diabetes";
        cin>>ch;
        if(ch==1)
        {
            ShellExecute(NULL, "open", "file:///C:/Users/saksh/OneDrive/Documents/CN%20-%20Unit%202.pdf", NULL, NULL, SW_SHOWNORMAL);
        }
        else if(ch==2)
        {
            ShellExecute(NULL, "open", "file:///C:/Users/saksh/OneDrive/Documents/CN%20-%20Unit%202.pdf", NULL, NULL, SW_SHOWNORMAL);
        }
        else
        {
            exit(0);
        }
    }
}
    } 



    else
    {

    system("Color 0B");
     cout << "\t\t\t\t*------------------------------------------------------*\n";

    // Menu options with clear formatting and missing semicolon fixed
    cout << "\t\t\t\t| 1. UNDERWEIGHT                                       |\n";
    cout << "\t\t\t\t| 2. HEALTHY                                           |\n";
    cout << "\t\t\t\t| 3. OVERWEIGHT                                        |\n";
    cout << "\t\t\t\t| 4. Do you have any of the diseases mentioned below?  |\n";
    cout << "\t\t\t\t|     1. B.P.                                          |\n";
    cout << "\t\t\t\t|     2. Diabetes                                      |\n";
    cout << "\t\t\t\t| 5. EXIT                                              |\n";

    // Bottom border
    cout << "\t\t\t\t*------------------------------------------------------*\n";
int option,ch;
cout<<"\nenter condition\n";
cin>>cond;
switch(cond)
{
    case 1:
    {
        ShellExecute(NULL, "open", "file:///C:/Users/saksh/OneDrive/Documents/CN%20-%20Unit%202.pdf", NULL, NULL, SW_SHOWNORMAL);
    }break;
    case 2:
    {
        ShellExecute(NULL, "open", "file:///C:/Users/saksh/OneDrive/Documents/CN%20-%20Unit%202.pdf", NULL, NULL, SW_SHOWNORMAL);
    }break;
    case 3:
    {
        ShellExecute(NULL, "open", "file:///C:/Users/saksh/OneDrive/Documents/CN%20-%20Unit%202.pdf", NULL, NULL, SW_SHOWNORMAL);
    }
    case 4:
    {
        cout<<"CHOOSE A NUMBER\n1. B.P.\t2.Diabetes";
        cin>>ch;
        if(ch==1)
        {
            ShellExecute(NULL, "open", "file:///C:/Users/saksh/OneDrive/Documents/CN%20-%20Unit%202.pdf", NULL, NULL, SW_SHOWNORMAL);
        }
        else if(ch==2)
        {
            ShellExecute(NULL, "open", "file:///C:/Users/saksh/OneDrive/Documents/CN%20-%20Unit%202.pdf", NULL, NULL, SW_SHOWNORMAL);
        }
        else
        {
            exit(0);
        }
    }
}
}

}