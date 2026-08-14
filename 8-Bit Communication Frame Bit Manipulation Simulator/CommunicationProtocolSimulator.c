#include <stdio.h>

void displayBinary(unsigned char frame)
{
    printf("Binary : ");

    for(int i=7;i>=0;i--)
    {
        printf("%d",(frame>>i)&1);
    }

    printf("\n");
}

unsigned char setBit(unsigned char frame,int pos)
{
    return frame | (1<<pos);
}

unsigned char clearBit(unsigned char frame,int pos)
{
    return frame & ~(1<<pos);
}

unsigned char toggleBit(unsigned char frame,int pos)
{
    return frame ^ (1<<pos);
}

int checkBit(unsigned char frame,int pos)
{
    return (frame>>pos)&1;
}

int countSetBits(unsigned char frame)
{
    int count=0;

    while(frame!=0)
    {
        if(frame&1)
            count++;

        frame=frame>>1;
    }

    return count;
}
int validPosition(int pos)
{
    return pos >= 0 && pos <= 7;
}

int main()
{
    unsigned char frame=0;
    int choice,pos;

    while(1)
    {
        printf("\n===== Communication Protocol Simulator =====\n");
        printf("Current Frame = %u\n",frame);
        displayBinary(frame);

        printf("\n1. Set Bit\n");
        printf("2. Clear Bit\n");
        printf("3. Toggle Bit\n");
        printf("4. Check Bit\n");
        printf("5. Count Set Bits\n");
        printf("6. Display Binary\n");
        printf("7. Exit\n");

        printf("Enter Choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:

                printf("Enter Bit Position (0-7) : ");
                scanf("%d",&pos);
                if (!validPosition(pos))
                {
                    printf("Invalid bit position! Enter 0-7.\n");
                    break;
                }
                frame=setBit(frame,pos);

                break;

            case 2:

                printf("Enter Bit Position (0-7) : ");
                scanf("%d",&pos);

                frame=clearBit(frame,pos);

                break;

            case 3:

                printf("Enter Bit Position (0-7) : ");
                scanf("%d",&pos);

                frame=toggleBit(frame,pos);

                break;

            case 4:

                printf("Enter Bit Position (0-7) : ");
                scanf("%d",&pos);

                if(checkBit(frame,pos))
                    printf("Bit %d is SET\n",pos);
                else
                    printf("Bit %d is CLEARED\n",pos);

                break;

            case 5:

                printf("Number of Set Bits = %d\n",countSetBits(frame));

                break;

            case 6:

                displayBinary(frame);

                break;

            case 7:

                return 0;

            default:

                printf("Invalid Choice\n");
        }
    }

    return 0;
}