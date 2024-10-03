#include<stdio.h>
struct allVariables{
    int c,a,f[10],q;
    float d,na;
    char ch;
}v;

void order(){
    if(v.c==1){
            printf("Order(Pav Bhaji). Enter Quantity: ");
            scanf("%i",&v.q);
            v.f[0]=v.q*80;
        }
        else if(v.c==2){
            printf("Order(Itallian Pizza). Enter Quantity: ");
            scanf("%i",&v.q);
            v.f[1]=v.q*250;
        }
        else if(v.c==3){
            printf("Order(Arabiata Pasta). Enter Quantity: ");
            scanf("%i",&v.q);
            v.f[2]=v.q*200;
        }
        else if(v.c==4){
            printf("Order(Cheese Burger). Enter Quantity: ");
            scanf("%i",&v.q);
            v.f[3]=v.q*40;
        }
        else if(v.c==5){
            printf("Order(Jain Burger). Enter Quantity: ");
            scanf("%i",&v.q);
            v.f[4]=v.q*35;
        }
        else if(v.c==6){
            printf("Order(French Fries). Enter Quantity: ");
            scanf("%i",&v.q);
            v.f[5]=v.q*75;
        }
        else if(v.c==7){
            printf("Order(Curly Fries). Enter Quantity: ");
            scanf("%i",&v.q);
            v.f[6]=v.q*85;
        }
        else if(v.c==8){
            printf("Order(Thumbs Up). Enter Quantity: ");
            scanf("%i",&v.q);
            v.f[7]=v.q*30;
        }
        else if(v.c==9){
            printf("Order(Coca Cola). Enter Quantity: ");
            scanf("%i",&v.q);
            v.f[8]=v.q*25;
        }
        else if(v.c==10){
            printf("Order(Sprite). Enter Quantity: ");
            scanf("%i",&v.q);
            v.f[9]=v.q*25;
        }
        else
            printf("Invalid Input");
}

void calculateAmount() {
    printf("\n\nCalculating total order...\n");
    v.a=v.f[0]+v.f[1]+v.f[2]+v.f[3]+v.f[4]+v.f[5]+v.f[6]+v.f[7]+v.f[8]+v.f[9];
    if(v.a<301)
        v.d=0.02;
    else if(v.a>=301&&v.a<=600)
        v.d=0.04;
    else if(v.a>600)
        v.d=0.08;
    printf("\n\nAmount: %i\nDiscount: %.2f%%\t    GST: 5%%\n\n",v.a,v.d*100);
    float da=v.a*(1-v.d); 
    v.na=da*1.05;  
    printf("Net amount: (%i-%i*%.2f)*1.05=%.2f\n",v.a,v.a,v.d,v.na);
    printf("Thank you for shopping with us.\nHave a great day! :) ");
}


int main(){
    v.f[0]=0;v.f[1]=0;v.f[2]=0;v.f[3]=0;v.f[4]=0;v.f[5]=0;v.f[6]=0;v.f[7]=0;v.f[8]=0;v.f[9]=0;v.c=0;v.q=0;v.a=0;v.d=0.0;v.ch='y';v.na=0.0;
    printf("*************************** Hello and welcome to Good Vibes fast food restaurant ***************************\nWhere we serve with good vibes :)\n");
    while(1){
    printf("\nEnter you choice:\n\t1. View the Menu\n\t2. Order food\n\t3. Exit\n\t");
    scanf("%i",&v.c);
    if(v.c==1||v.c==2){
        printf("\n\nMENU:\nS.no\tItem\t\tPrice\n1\tPav Bhaji\t80.00\n2\tItalian Pizza\t250.00\n3\tArabiata Pasta\t200.00\n4\tCheese Burger\t40.00\n5\tJain Burger\t35.00\n6\tFrench Fries\t75.00\n7\tCurly Fries\t85.00\n8\tThumbs Up\t30.00\n9\tCoca Cola\t25.00\n10\tSprite\t\t25.00\n");
        printf("Enter your order");
        scanf("%i",&v.c);
        order();
        v.ch='y';
        while(v.ch=='y'){
            printf("Want to order more great food(y/n)");
            scanf(" %c",&v.ch);
            if(v.ch=='y'){
            printf("\nEnter your order\n");
            scanf(" %i",&v.c);
            order();
            }
            else if(v.ch=='n'){
                printf("Press 1 to Go back to home page\nPress 2 to calculate total order\t:\t");
                scanf("%i",&v.c);
                if(v.c==2) {calculateAmount();break;}
            }
            else {printf("Invalid Input");return 1;}
    }
    }
    else if(v.c==3)
        {printf("Bye");break;}
    else
        printf("Invalid input");
}}