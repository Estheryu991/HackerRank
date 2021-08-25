#include <stdio.h>
typedef unsigned int u32;
typedef          int s32;
int main()
{
    u32 n;
    scanf("%u",&n);
    for (u32 i=0;i<n;i++)
    {
        s32 x,y,z;scanf("%d %d %d",&x,&y,&z);
        s32 dx=x<z?z-x:x-z;
        s32 dy=y<z?z-y:y-z;
        if (dx<dy) printf("Cat A\n");
        else if (dx>dy) printf("Cat B\n");
        else printf("Mouse C\n");
    }
}
