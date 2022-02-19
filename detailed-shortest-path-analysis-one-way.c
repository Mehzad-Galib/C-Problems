#include <stdio.h>

//take using scanf
struct LinkProfile{
    int Distination;
    int Origin;
    int Distance;
};

//for lebeling
struct LebelNode{
    int NodeJ;
    int mindistance;
    int fromNode;
};

void printmethod(int _nodej, int _mindist, int _originnode)
{
    //printf("debug mode %d \n", _mindist );
    printf("%d \t \t U%d = %d \t \t \t [%d, %d] \n", _nodej,_nodej,_mindist,_mindist,_originnode);
}

int main()
{
    
    printf("Atmost 100 links are allowed \n");
    printf("please maintain destination order \n");
    printf("If any destination is repeted two times than maintain origin order\n");
    printf("Thank you\n");
    struct LinkProfile links[100];
    struct LebelNode lebels[100];
    
    struct LebelNode Comparelebels[100];
    
    //initiate the first lebelNode lebel
    lebels[0].NodeJ = 1;
    lebels[0].mindistance = 0;
    lebels[0].fromNode = 0;
    
    links[0].Distination = 1;
    links[0].Origin = 0;
    links[0].Distance = 0;
    
    //take the total number of nodes
    int Total_Link;
    printf("\n Give the total number of links \t ");
    scanf( "%d", &Total_Link );
  
    //take all the link Distination, Origin, distance
    int i;
    for(i = 1; i<= Total_Link; i++)
    {
        printf("Give %d no of link Distination, Origin, distance \n", i);
        scanf("%d", &links[i].Distination);
        scanf("%d", &links[i].Origin);
        scanf("%d", &links[i].Distance); 
        
    }
    
    Comparelebels[0].NodeJ = 1;
    Comparelebels[0].mindistance = 0;
    Comparelebels[0].fromNode = 0;
    
    
    //print the captions
    printf("\n \t \t Shortest path calculation \n \n");
    printf("node j \t \t Uj \t \t \t \t lebel \n");
    printf("_________________________________________________________________ \n");
    printf("%d \t \t U1 = 0 \t \t \t [0, _] \n", links[1].Origin);
    
    //calculation
    int c = 1;
    int l = 0;
    int j;
    for(j = 1; j <= Total_Link; j++)
    {
        
        lebels[j].NodeJ = links[j].Distination;
        lebels[j].mindistance = Comparelebels[links[j].Origin - 1].mindistance + links[j].Distance;
        lebels[j].fromNode = links[j].Origin;
        
        if(Comparelebels[c-1].NodeJ == lebels[j].NodeJ){
            if(Comparelebels[c-1].mindistance > lebels[j].mindistance){
                Comparelebels[c-1].NodeJ = lebels[j].NodeJ;
                Comparelebels[c-1].mindistance = lebels[j].mindistance;
                Comparelebels[c-1].fromNode = lebels[j].fromNode;
            }
        }else{
            Comparelebels[c].NodeJ = lebels[j].NodeJ;
            Comparelebels[c].mindistance = lebels[j].mindistance;
            Comparelebels[c].fromNode = lebels[j].fromNode;
            c++;
        }
    }
    
    
    for(j = 1; j <= c-1; j++)
    {
        printmethod(Comparelebels[j].NodeJ,Comparelebels[j].mindistance,Comparelebels[j].fromNode);
        //printf("\n link \n");
    }
    
    int y, previousnode;
    int shortestpathdistance = 0;
    y = 0;
    printf("shortest way \n");
    
    printf("%d ", Comparelebels[c-1].NodeJ);
    
    //shortestpathdistance += Comparelebels[y].
    previousnode = Comparelebels[c-1].fromNode;
    for(y = c-2; y >= 0; y--)
    {
        //printf("%d <=== ", Comparelebels[y].NodeJ);
        if(previousnode == Comparelebels[y].NodeJ)
        {
            printf("%d ", Comparelebels[y].NodeJ);
            previousnode = Comparelebels[y].fromNode;
        }
        
        if(y == 0){
            printf(" ");
        }else{
            printf("<=== ");
        }
    }
    
    return 0;
}