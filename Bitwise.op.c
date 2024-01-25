#include <stdio.h>
int main(void){

int reg1, reg2;

		//if (enable_svs)
        reg1 = 5 << 10;  //VR5510_FS_I_SVS_SVS_OFFSET = 10
        printf("Reg1 value is: %d\n", reg1); 
        //Binary Reg1=0001010000000000, which is set to a known value.
        
        //else
        reg2 = 5 << 10; //VR5510_FS_I_SVS_SVS_OFFSET = 10
        reg2 &= ~0xFC00U;  //VR5510_FS_I_SVS_SVS_OFFSET_MASK = 0xFC00U
        printf("Reg2 value is: %d", reg2);
        //Binary Reg2=0000000000000000, which corresponds to no offset.
}