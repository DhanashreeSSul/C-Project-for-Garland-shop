#include <iostream>
using namespace std;
class Garland
{
    public:
    int choice, choice1, choice2,size;
    char x, y;
    int small, medium, large, STotal=0, MTotal=0, LTotal=0, Total;
    double dis;
    void code(){
        cout<<"\t\t\t\t\t\tGARLANDS (MALA)🌼"<<endl<<endl;
    do{
    cout<<"CHOOSE THE TYPE OF GARLAND:"<<endl;
    cout<<"1]MARIGOLD🌻"<<"           "<<"2]CHAMPAKA🌸"<<"        "<<"3]LOTUS🌷"<<endl<<"4]LILY🥀"<<"               "<<"5]ASHOKA🌺"<<"          "<<"6]OLEANDER🌸"<<endl<<"7]CHRYSANTHEMUM🏵"<<"      "<<"8]ROSE🌹"<<"            "<<"9]HIBISCUS🌺"<<endl<<"                       10]MIXED💐"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
        do{
        cout<<"ENTER SIZE(S, M, L):"<<endl<<"1)SMALL(S)"<<"        "<<"2)MEDIUM(M)"<<"        "<<"3)LARGE(L)"<<endl;
        cin>>size;
        cout<<endl;
        switch(size)
        {
            case 1:
            cout<<"ENTER THE QUANTITY:";
            cin>>small;
            cout<<endl;
            STotal=small*100;
            cout<<"1 GARLAND = 100 Rs.."<<endl<<endl;
            cout<<"PRICE OF SMALL GARLANDS:"<<STotal;
            cout<<endl<<endl;
            break;
           
            case 2:
            cout<<"ENTER THE QUANTITY:";
            cin>>medium;
            cout<<endl;
            MTotal=medium*200;
            cout<<"1 GARLAND = 200 Rs.."<<endl<<endl;
            cout<<"PRICE OF MEDIUM GARLANDS:"<<MTotal;
            cout<<endl<<endl;
            break;
           
            case 3:
            cout<<"ENTER THE QUANTITY:";
            cin>>large;
            cout<<endl;
            LTotal=large*400;
             cout<<"1 GARLAND = 400 RS.."<<endl;
            cout<<"PRICE OF LARGE GARLANDS:"<<LTotal;
            cout<<endl<<endl;
            break;
           
            default:
            cout<<"YOU HAVE CHOSEN WRONG SIZE!!"<<endl<<"PLEASE TRY AGAIN!!"<<endl;
            break;
           
        }
        cout<<"DO YOU WANT TO SELECT ANY OTHER CHOICE(Y/N)?"<<endl;
        cin>>x;
        }while(x=='Y'||x=='y');
        break;
       
       
      case 2:
         do{
        cout<<"ENTER SIZE(S, M, L):"<<endl<<"1)SMALL(S)"<<"        "<<"2)MEDIUM(M)"<<"        "<<"3)LARGE(L)"<<endl;
        cin>>size;
        cout<<endl;
        switch(size)
        {
            case 1:
            cout<<"ENTER THE QUANTITY:";
            cin>>small;
            cout<<endl;
            STotal=small*100;
            cout<<"1 GARLAND = 100 Rs.."<<endl<<endl;
            cout<<"PRICE OF SMALL GARLANDS:"<<STotal;
            cout<<endl<<endl;
            break;
           
            case 2:
            cout<<"ENTER THE QUANTITY:";
            cin>>medium;
            cout<<endl;
            MTotal=medium*200;
            cout<<"1 GARLAND = 200 Rs.."<<endl<<endl;
            cout<<"PRICE OF MEDIUM GARLANDS:"<<MTotal;
            cout<<endl<<endl;
            break;
           
            case 3:
            cout<<"ENTER THE QUANTITY:";
            cin>>large;
            cout<<endl;
            LTotal=large*400;
             cout<<"1 GARLAND = 400 RS.."<<endl;
            cout<<"PRICE OF LARGE GARLANDS:"<<LTotal;
            cout<<endl<<endl;
            break;
           
            default:
            cout<<"YOU HAVE CHOSEN WRONG SIZE!!"<<endl<<"PLEASE TRY AGAIN!!"<<endl;
            break;
           
        }
        cout<<"DO YOU WANT TO SELECT ANY OTHER CHOICE(Y/N)?"<<endl;
        cin>>x;
        }while(x=='Y'||x=='y');
        break;
       
        case 3:
         do{
        cout<<"ENTER SIZE(S, M, L):"<<endl<<"1)SMALL(S)"<<"        "<<"2)MEDIUM(M)"<<"        "<<"3)LARGE(L)"<<endl;
        cin>>size;
        cout<<endl;
        switch(size)
        {
            case 1:
            cout<<"ENTER THE QUANTITY:";
            cin>>small;
            cout<<endl;
            STotal=small*100;
            cout<<"1 GARLAND = 100 Rs.."<<endl<<endl;
            cout<<"PRICE OF SMALL GARLANDS:"<<STotal;
            cout<<endl<<endl;
            break;
           
            case 2:
            cout<<"ENTER THE QUANTITY:";
            cin>>medium;
            cout<<endl;
            MTotal=medium*200;
            cout<<"1 GARLAND = 200 Rs.."<<endl<<endl;
            cout<<"PRICE OF MEDIUM GARLANDS:"<<MTotal;
            cout<<endl<<endl;
            break;
           
            case 3:
            cout<<"ENTER THE QUANTITY:";
            cin>>large;
            cout<<endl;
            LTotal=large*400;
             cout<<"1 GARLAND = 400 RS.."<<endl;
            cout<<"PRICE OF LARGE GARLANDS:"<<LTotal;
            cout<<endl<<endl;
            break;
           
            default:
            cout<<"YOU HAVE CHOSEN WRONG SIZE!!"<<endl<<"PLEASE TRY AGAIN!!"<<endl;
            break;
           
        }
        cout<<"DO YOU WANT TO SELECT ANY OTHER CHOICE(Y/N)?"<<endl;
        cin>>x;
        }while(x=='Y'||x=='y');
        break;
       
        case 4:
         do{
        cout<<"ENTER SIZE(S, M, L):"<<endl<<"1)SMALL(S)"<<"        "<<"2)MEDIUM(M)"<<"        "<<"3)LARGE(L)"<<endl;
        cin>>size;
        cout<<endl;
        switch(size)
        {
            case 1:
            cout<<"ENTER THE QUANTITY:";
            cin>>small;
            cout<<endl;
            STotal=small*100;
            cout<<"1 GARLAND = 100 Rs.."<<endl<<endl;
            cout<<"PRICE OF SMALL GARLANDS:"<<STotal;
            cout<<endl<<endl;
            break;
           
            case 2:
            cout<<"ENTER THE QUANTITY:";
            cin>>medium;
            cout<<endl;
            MTotal=medium*200;
            cout<<"1 GARLAND = 200 Rs.."<<endl<<endl;
            cout<<"PRICE OF MEDIUM GARLANDS:"<<MTotal;
            cout<<endl<<endl;
            break;
           
            case 3:
            cout<<"ENTER THE QUANTITY:";
            cin>>large;
            cout<<endl;
            LTotal=large*400;
             cout<<"1 GARLAND = 400 RS.."<<endl;
            cout<<"PRICE OF LARGE GARLANDS:"<<LTotal;
            cout<<endl<<endl;
            break;
           
            default:
            cout<<"YOU HAVE CHOSEN WRONG SIZE!!"<<endl<<"PLEASE TRY AGAIN!!"<<endl;
            break;
           
        }
        cout<<"DO YOU WANT TO SELECT ANY OTHER CHOICE(Y/N)?"<<endl;
        cin>>x;
        }while(x=='Y'||x=='y');
        break;
       
        case 5:
         do{
        cout<<"ENTER SIZE(S, M, L):"<<endl<<"1)SMALL(S)"<<"        "<<"2)MEDIUM(M)"<<"        "<<"3)LARGE(L)"<<endl;
        cin>>size;
        cout<<endl;
        switch(size)
        {
            case 1:
            cout<<"ENTER THE QUANTITY:";
            cin>>small;
            cout<<endl;
            STotal=small*100;
            cout<<"1 GARLAND = 100 Rs.."<<endl<<endl;
            cout<<"PRICE OF SMALL GARLANDS:"<<STotal;
            cout<<endl<<endl;
            break;
           
            case 2:
            cout<<"ENTER THE QUANTITY:";
            cin>>medium;
            cout<<endl;
            MTotal=medium*200;
            cout<<"1 GARLAND = 200 Rs.."<<endl<<endl;
            cout<<"PRICE OF MEDIUM GARLANDS:"<<MTotal;
            cout<<endl<<endl;
            break;
           
            case 3:
            cout<<"ENTER THE QUANTITY:";
            cin>>large;
            cout<<endl;
            LTotal=large*400;
             cout<<"1 GARLAND = 400 RS.."<<endl;
            cout<<"PRICE OF LARGE GARLANDS:"<<LTotal;
            cout<<endl<<endl;
            break;
           
            default:
            cout<<"YOU HAVE CHOSEN WRONG SIZE!!"<<endl<<"PLEASE TRY AGAIN!!"<<endl;
            break;
           
        }
        cout<<"DO YOU WANT TO SELECT ANY OTHER CHOICE(Y/N)?"<<endl;
        cin>>x;
        }while(x=='Y'||x=='y');
        break;
       
        case 6:
         do{
        cout<<"ENTER SIZE(S, M, L):"<<endl<<"1)SMALL(S)"<<"        "<<"2)MEDIUM(M)"<<"        "<<"3)LARGE(L)"<<endl;
        cin>>size;
        cout<<endl;
        switch(size)
        {
            case 1:
            cout<<"ENTER THE QUANTITY:";
            cin>>small;
            cout<<endl;
            STotal=small*100;
            cout<<"1 GARLAND = 100 Rs.."<<endl<<endl;
            cout<<"PRICE OF SMALL GARLANDS:"<<STotal;
            cout<<endl<<endl;
            break;
           
            case 2:
            cout<<"ENTER THE QUANTITY:";
            cin>>medium;
            cout<<endl;
            MTotal=medium*200;
            cout<<"1 GARLAND = 200 Rs.."<<endl<<endl;
            cout<<"PRICE OF MEDIUM GARLANDS:"<<MTotal;
            cout<<endl<<endl;
            break;
           
            case 3:
            cout<<"ENTER THE QUANTITY:";
            cin>>large;
            cout<<endl;
            LTotal=large*400;
             cout<<"1 GARLAND = 400 RS.."<<endl;
            cout<<"PRICE OF LARGE GARLANDS:"<<LTotal;
            cout<<endl<<endl;
            break;
           
            default:
            cout<<"YOU HAVE CHOSEN WRONG SIZE!!"<<endl<<"PLEASE TRY AGAIN!!"<<endl;
            break;
           
        }
        cout<<"DO YOU WANT TO SELECT ANY OTHER CHOICE(Y/N)?"<<endl;
        cin>>x;
        }while(x=='Y'||x=='y');
        break;
       
        case 7:
         do{
        cout<<"ENTER SIZE(S, M, L):"<<endl<<"1)SMALL(S)"<<"        "<<"2)MEDIUM(M)"<<"        "<<"3)LARGE(L)"<<endl;
        cin>>size;
        cout<<endl;
        switch(size)
        {
            case 1:
            cout<<"ENTER THE QUANTITY:";
            cin>>small;
            cout<<endl;
            STotal=small*100;
            cout<<"1 GARLAND = 100 Rs.."<<endl<<endl;
            cout<<"PRICE OF SMALL GARLANDS:"<<STotal;
            cout<<endl<<endl;
            break;
           
            case 2:
            cout<<"ENTER THE QUANTITY:";
            cin>>medium;
            cout<<endl;
            MTotal=medium*200;
            cout<<"1 GARLAND = 200 Rs.."<<endl<<endl;
            cout<<"PRICE OF MEDIUM GARLANDS:"<<MTotal;
            cout<<endl<<endl;
            break;
           
            case 3:
            cout<<"ENTER THE QUANTITY:";
            cin>>large;
            cout<<endl;
            LTotal=large*400;
             cout<<"1 GARLAND = 400 RS.."<<endl;
            cout<<"PRICE OF LARGE GARLANDS:"<<LTotal;
            cout<<endl<<endl;
            break;
           
            default:
            cout<<"YOU HAVE CHOSEN WRONG SIZE!!"<<endl<<"PLEASE TRY AGAIN!!"<<endl;
            break;
           
        }
        cout<<"DO YOU WANT TO SELECT ANY OTHER CHOICE(Y/N)?"<<endl;
        cin>>x;
        }while(x=='Y'||x=='y');
        break;
       
        case 8:
         do{
        cout<<"ENTER SIZE(S, M, L):"<<endl<<"1)SMALL(S)"<<"        "<<"2)MEDIUM(M)"<<"        "<<"3)LARGE(L)"<<endl;
        cin>>size;
        cout<<endl;
        switch(size)
        {
            case 1:
            cout<<"ENTER THE QUANTITY:";
            cin>>small;
            cout<<endl;
            STotal=small*100;
            cout<<"1 GARLAND = 100 Rs.."<<endl<<endl;
            cout<<"PRICE OF SMALL GARLANDS:"<<STotal;
            cout<<endl<<endl;
            break;
           
            case 2:
            cout<<"ENTER THE QUANTITY:";
            cin>>medium;
            cout<<endl;
            MTotal=medium*200;
            cout<<"1 GARLAND = 200 Rs.."<<endl<<endl;
            cout<<"PRICE OF MEDIUM GARLANDS:"<<MTotal;
            cout<<endl<<endl;
            break;
           
            case 3:
            cout<<"ENTER THE QUANTITY:";
            cin>>large;
            cout<<endl;
            LTotal=large*400;
             cout<<"1 GARLAND = 400 RS.."<<endl;
            cout<<"PRICE OF LARGE GARLANDS:"<<LTotal;
            cout<<endl<<endl;
            break;
           
            default:
            cout<<"YOU HAVE CHOSEN WRONG SIZE!!"<<endl<<"PLEASE TRY AGAIN!!"<<endl;
            break;
           
        }
        cout<<"DO YOU WANT TO SELECT ANY OTHER CHOICE(Y/N)?"<<endl;
        cin>>x;
        }while(x=='Y'||x=='y');
        break;
       
        case 9:
         do{
        cout<<"ENTER SIZE(S, M, L):"<<endl<<"1)SMALL(S)"<<"        "<<"2)MEDIUM(M)"<<"        "<<"3)LARGE(L)"<<endl;
        cin>>size;
        cout<<endl;
        switch(size)
        {
            case 1:
            cout<<"ENTER THE QUANTITY:";
            cin>>small;
            cout<<endl;
            STotal=small*100;
            cout<<"1 GARLAND = 100 Rs.."<<endl<<endl;
            cout<<"PRICE OF SMALL GARLANDS:"<<STotal;
            cout<<endl<<endl;
            break;
           
            case 2:
            cout<<"ENTER THE QUANTITY:";
            cin>>medium;
            cout<<endl;
            MTotal=medium*200;
            cout<<"1 GARLAND = 200 Rs.."<<endl<<endl;
            cout<<"PRICE OF MEDIUM GARLANDS:"<<MTotal;
            cout<<endl<<endl;
            break;
           
            case 3:
            cout<<"ENTER THE QUANTITY:";
            cin>>large;
            cout<<endl;
            LTotal=large*400;
             cout<<"1 GARLAND = 400 RS.."<<endl;
            cout<<"PRICE OF LARGE GARLANDS:"<<LTotal;
            cout<<endl<<endl;
            break;
           
            default:
            cout<<"YOU HAVE CHOSEN WRONG SIZE!!"<<endl<<"PLEASE TRY AGAIN!!"<<endl;
            break;
           
        }
        cout<<"DO YOU WANT TO SELECT ANY OTHER CHOICE(Y/N)?"<<endl;
        cin>>x;
        }while(x=='Y'||x=='y');
        break;
       
        case 10:
             cout<<"CHOOSE THE TWO TYPE OF FLOWERS IN GARLAND:"<<endl;
    cout<<"1]MARIGOLD🌻"<<"           "<<"2]CHAMPAKA🌸"<<"        "<<"3]LOTUS🌷"<<endl<<"4]LILY🥀"<<"               "<<"5]ASHOKA🌺"<<"          "<<"6]OLEANDER🌸"<<endl<<"7]CHRYSANTHEMUM🏵"<<"      "<<"8]ROSE🌹"<<"            "<<"9]HIBISCUS🌺"<<endl;
            cin>>choice1>>choice2;
            cout<<endl;
            do{
         cout<<"ENTER SIZE(S, M, L):"<<endl<<"1)SMALL(S)"<<"        "<<"2)MEDIUM(M)"<<"        "<<"3)LARGE(L)"<<endl;
        cin>>size;
        cout<<endl;
        switch(size)
        {
            case 1:
            cout<<"ENTER THE QUANTITY:";
            cin>>small;
            cout<<endl;
            STotal=small*100;
            cout<<"1 GARLAND = 100 Rs.."<<endl<<endl;
            cout<<"PRICE OF SMALL GARLANDS:"<<STotal;
            cout<<endl<<endl;
            break;
           
            case 2:
            cout<<"ENTER THE QUANTITY:";
            cin>>medium;
            cout<<endl;
            MTotal=medium*200;
            cout<<"1 GARLAND = 200 Rs.."<<endl<<endl;
            cout<<"PRICE OF MEDIUM GARLANDS:"<<MTotal;
            cout<<endl<<endl;
            break;
           
            case 3:
            cout<<"ENTER THE QUANTITY:";
            cin>>large;
            cout<<endl;
            LTotal=large*400;
             cout<<"1 GARLAND = 400 RS.."<<endl;
            cout<<"PRICE OF LARGE GARLANDS:"<<LTotal;
            cout<<endl<<endl;
            break;
           
            default:
            cout<<"YOU HAVE CHOSEN WRONG SIZE!!"<<endl<<"PLEASE TRY AGAIN!!"<<endl;
            break;
           
        }
        cout<<"DO YOU WANT TO SELECT ANY OTHER CHOICE(Y/N)?"<<endl;
        cin>>x;
        }while(x=='Y'||x=='y');
        break;
       
        default:
        cout<<"MAY BE YOUR CHOICE IS WRONG!!"<<endl<<"PLEASE TRY NEXT TIME!!"<<endl<<endl;
        break;
        }
        cout<<"DO YOU WANT TO SELECT ANY OTHER CHOICE:(Y/N)?"<<endl;
        cin>>y;
    }while(y=='y'||y=='Y');
   
    }
};
int main() {
   Garland g;
   g.code();
   cout<<"\t\tINVOICE:"<<endl;
   cout<<"SMALL\t\t\t"<<g.STotal<<" Rs.\t\t"<<endl;
   cout<<"MEDIUM\t\t\t"<<g.MTotal<<" Rs.\t\t"<<endl;
   cout<<"LARGE\t\t\t"<<g.LTotal<<" Rs.\t\t"<<endl;
   cout<<"TOTAL:\t\t\t";
   g.Total=g.STotal+g.MTotal+g.LTotal;
   cout<<g.Total<<" "<<"Rs."<<endl;
   cout<<"DISCOUNT:\t\t"<<"-20%"<<endl;
   g.dis=g.Total - (g.Total*0.2);
   cout<<"FINAL PRICE:\t"<<g.dis<<" Rs."<<endl<<endl;
   cout<<"THANK YOU MEET AGAIN!!!";
    return 0;
}


