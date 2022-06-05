/******************************************************************************

VLSM Calculator

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{   
    string inputIp,inputSubnet;
    int i,n=0;
    int sum=0;
    
    //int k=1;
    printf("How many network do you have in your topology? : ");
    cin>>n;
    
    int array[n];
    
    //input networks
    for(int i=1; i<=n;i++){
        cout<<i<<" No. Network: ";
        cin>>array[i];
    }
    
    printf("\nNetwork List: ");
    
    printf("\n============================\n");
    
    //showing inputed networks
    for(int i=1; i<=n;i++){
        cout<<i<<" No. Network: "<<array[i]<<endl;
        
        //adding inputed network
        sum=sum+array[i];
    }
    printf("\n============================\n");
    
    cout<<"Total Networks: "<<sum<<"\n";
    
    printf("\n============================\n");
    
    //cout<<"\n"<<i<<" No. Network: "<<array[i];
    
    printf("Network List: \n");
    
    printf("Enter the prefer network address: ");
    cin>>inputIp;
    printf("Input Subnet Mask: ");
    cin>>inputSubnet;
    
    cout<<inputIp<<"/"<<inputSubnet;

    return 0;
}

